$GEM_DIR = '..'
$sandbox = "#{$GEM_DIR}/sandbox"

class TestFixture

  def initialize(label, &block)
    @fixture_label = label
    @test_count = 0
    @fail_count = 0
    @current_test_passed = true
    @current_test_pending = false
    puts
    puts @fixture_label
    puts '-' * label.size
    self.instance_eval(&block)
    summarize
  end

  def describe(label, &block)
    puts
    puts "  - #{label}"
    self.instance_eval(&block)
  end

  def it(label, &block)
    @current_test_passed = true
    @current_test_pending = false
    exc = nil
    begin
      self.instance_eval(&block) if block
    rescue StandardError => ex
      exc = ex
      @current_test_passed = false
    end
    tag = ""
    if @current_test_pending
      tag = "[PENDING] "
    elsif !@current_test_passed
      tag = "[FAILED] "
    end
    puts "    + #{tag}#{label}"

    @test_count += 1
    @fail_count += 1 unless @current_test_passed

    if exc
      $stderr.puts "    Uncaught #{exc.class.to_s}: #{exc}\n#{exc.backtrace.join("\n")}"
    end
  end

  def assert(condition)
    @current_test_passed &&= condition
    condition # So client can react to result
  end

  def assert_raises(excClass, &block)
    begin
      block[]
    rescue excClass
      return
    end
    @current_test_passed = false
  end

  def fail
    @current_test_passed = false
  end

  def pending
    @current_test_pending = true
  end

  def summarize
    puts
    puts "  #{@fail_count == 0 ? 'SUCCESS' : 'FAILURE' } [#{@fail_count}/#{@test_count} tests failed]"
  end
end

TestFixture.new("ENV") do
  describe "ENV::[]" do
    it "Retrieves the value for environment variable name as a String" do
      pending
    end
    
    it "Returns nil if the named variable does not exist" do
      pending
    end
  end
  
  describe "ENV::[]=" do
    it "Sets the environment variable name to value" do
      pending
    end
    
    it "If the value given is nil the environment variable is deleted" do
      pending
    end
  end
  
  describe "ENV::clear" do
    it "Removes every environment variable" do
      pending
    end
  end
  
  describe "ENV::delete(name)" do
    it "Deletes the environment variable with name and returns the value of the variable" do
      pending
    end
    
    it "If a block is given it will be called when the named environment does not exist" do
      pending
    end
  end
  
  describe "ENV::each" do
    it "Yields each environment variable name and value" do
      pending
    end
    
    it "If no blok is given an Enumerator is returned" do
      pending
    end
  end
  
  describe "ENV::has_key?" do
    it "Returns true if there is an environment variable with the given name" do
      pending
    end
    
    it "Is aliased as ENV::include?" do
      pending
    end
  end
  
  describe "ENV::has_value?(value)" do
    it "Returns true if there is an environment variable with the given value" do
      pending
    end
  end
  
  
end
