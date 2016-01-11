GLib::TestFixture.new('Dir') do
  describe 'Dir#entries(PATH)' do
    it 'Lists the entries of the given directory' do
      assert Dir.entries('.').include? 'mrbgem.rake'
    end
    
    it 'Includes . & ..' do
      assert Dir.entries('.').include? '.'
      assert Dir.entries('.').include? '..'
    end
    
    it 'Does not include .. for paths without parents' do
      assert !Dir.entries('/').include?('..')
    end
  end
  
  describe 'Dir#[] or Dir#glob(PATH)' do
    it 'Implements the deep match pattern `**`' do
      assert Dir['**/*.rb'].include?('mrblib/cruby_lib/shellwords.rb')
    end
    
    it 'Implements character classes `[abcd]`' do
      assert Dir['mrbgem.[r]ake'].length == 1
    end
    
    it 'Implements alternation `{a,b,c,d}`' do
      results = Dir['**/*glob{.c,.rb}']
      assert results.include? 'mrblib/glob.rb'
      assert results.include? 'src/mruby_GLib_glob.c'
    end
    
    it 'Follows . & .. path segments' do
      assert Dir['./../mruby-glib/mrblib/../Rakefile*'].include?("./../mruby-glib/mrblib/../Rakefile.rb")
    end
    
    it 'Ignores .files by default' do
      assert !Dir['*/*'].include?('.git/config')
    end
    
    it 'Matches .files literally' do
      assert Dir['.git/*'].include?('.git/config')
    end
  end
end
