module Digest
  class SHA1
    def self.hexdigest(str)
      GLib.g_compute_checksum_for_string(GLib::GChecksumType::G_CHECKSUM_SHA1, str)
    end
  end
  
  class SHA256
    def self.hexdigest(str)
      GLib.g_compute_checksum_for_string(GLib::GChecksumType::G_CHECKSUM_SHA256, str)
    end
  end
  
  class SHA512
    def self.hexdigest(str)
      GLib.g_compute_checksum_for_string(GLib::GChecksumType::G_CHECKSUM_SHA512, str)
    end
  end
  
  class MD5
    def self.hexdigest(str)
      GLib.g_compute_checksum_for_string(GLib::GChecksumType::G_CHECKSUM_MD5, str)
    end
  end  
end
