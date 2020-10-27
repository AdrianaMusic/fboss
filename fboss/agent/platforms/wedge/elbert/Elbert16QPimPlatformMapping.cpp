/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#include "fboss/agent/platforms/wedge/elbert/Elbert16QPimPlatformMapping.h"

namespace {
constexpr auto kJsonPlatformMappingStr = R"(
{
  "ports": {
    "1": {
        "mapping": {
          "id": 1,
          "name": "eth4/3/1",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "BC0",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth4/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth4/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth4/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth4/3",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "2": {
        "mapping": {
          "id": 2,
          "name": "eth4/4/1",
          "controllingPort": 1,
          "pins": [
            {
              "a": {
                "chip": "BC0",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth4/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth4/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth4/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC0",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth4/4",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC0",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "3": {
        "mapping": {
          "id": 3,
          "name": "eth2/1/1",
          "controllingPort": 3,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth2/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC1",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth2/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC1",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth2/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC1",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth2/1",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "4": {
        "mapping": {
          "id": 4,
          "name": "eth2/2/1",
          "controllingPort": 3,
          "pins": [
            {
              "a": {
                "chip": "BC1",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth2/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC1",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth2/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC1",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth2/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC1",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth2/2",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC1",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "5": {
        "mapping": {
          "id": 5,
          "name": "eth5/9/1",
          "controllingPort": 5,
          "pins": [
            {
              "a": {
                "chip": "BC2",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth5/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth5/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth5/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth5/9",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "6": {
        "mapping": {
          "id": 6,
          "name": "eth5/10/1",
          "controllingPort": 5,
          "pins": [
            {
              "a": {
                "chip": "BC2",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth5/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth5/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth5/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC2",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth5/10",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC2",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "7": {
        "mapping": {
          "id": 7,
          "name": "eth3/11/1",
          "controllingPort": 7,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth3/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC3",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth3/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC3",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth3/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC3",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth3/11",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "8": {
        "mapping": {
          "id": 8,
          "name": "eth3/12/1",
          "controllingPort": 7,
          "pins": [
            {
              "a": {
                "chip": "BC3",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth3/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC3",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth3/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC3",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth3/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC3",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth3/12",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC3",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "17": {
        "mapping": {
          "id": 17,
          "name": "eth4/1/1",
          "controllingPort": 17,
          "pins": [
            {
              "a": {
                "chip": "BC4",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth4/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth4/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth4/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth4/1",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "18": {
        "mapping": {
          "id": 18,
          "name": "eth4/2/1",
          "controllingPort": 17,
          "pins": [
            {
              "a": {
                "chip": "BC4",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth4/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth4/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth4/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC4",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth4/2",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC4",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "19": {
        "mapping": {
          "id": 19,
          "name": "eth2/3/1",
          "controllingPort": 19,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth2/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC5",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth2/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC5",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth2/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC5",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth2/3",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "20": {
        "mapping": {
          "id": 20,
          "name": "eth2/4/1",
          "controllingPort": 19,
          "pins": [
            {
              "a": {
                "chip": "BC5",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth2/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC5",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth2/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC5",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth2/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC5",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth2/4",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC5",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "21": {
        "mapping": {
          "id": 21,
          "name": "eth5/11/1",
          "controllingPort": 21,
          "pins": [
            {
              "a": {
                "chip": "BC6",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth5/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth5/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth5/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth5/11",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "22": {
        "mapping": {
          "id": 22,
          "name": "eth5/12/1",
          "controllingPort": 21,
          "pins": [
            {
              "a": {
                "chip": "BC6",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth5/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth5/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth5/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC6",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth5/12",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC6",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "23": {
        "mapping": {
          "id": 23,
          "name": "eth3/9/1",
          "controllingPort": 23,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth3/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC7",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth3/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC7",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth3/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC7",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth3/9",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "24": {
        "mapping": {
          "id": 24,
          "name": "eth3/10/1",
          "controllingPort": 23,
          "pins": [
            {
              "a": {
                "chip": "BC7",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth3/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC7",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth3/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC7",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth3/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC7",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth3/10",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC7",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "34": {
        "mapping": {
          "id": 34,
          "name": "eth4/7/1",
          "controllingPort": 34,
          "pins": [
            {
              "a": {
                "chip": "BC8",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth4/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth4/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth4/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth4/7",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "35": {
        "mapping": {
          "id": 35,
          "name": "eth4/8/1",
          "controllingPort": 34,
          "pins": [
            {
              "a": {
                "chip": "BC8",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth4/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth4/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth4/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC8",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth4/8",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC8",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "36": {
        "mapping": {
          "id": 36,
          "name": "eth2/5/1",
          "controllingPort": 36,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth2/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC9",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth2/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC9",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth2/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC9",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth2/5",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "37": {
        "mapping": {
          "id": 37,
          "name": "eth2/6/1",
          "controllingPort": 36,
          "pins": [
            {
              "a": {
                "chip": "BC9",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth2/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC9",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth2/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC9",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth2/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC9",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth2/6",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC9",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "38": {
        "mapping": {
          "id": 38,
          "name": "eth5/13/1",
          "controllingPort": 38,
          "pins": [
            {
              "a": {
                "chip": "BC10",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth5/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth5/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth5/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth5/13",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "39": {
        "mapping": {
          "id": 39,
          "name": "eth5/14/1",
          "controllingPort": 38,
          "pins": [
            {
              "a": {
                "chip": "BC10",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth5/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth5/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth5/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC10",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth5/14",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC10",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "40": {
        "mapping": {
          "id": 40,
          "name": "eth3/15/1",
          "controllingPort": 40,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth3/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC11",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth3/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC11",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth3/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC11",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth3/15",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "41": {
        "mapping": {
          "id": 41,
          "name": "eth3/16/1",
          "controllingPort": 40,
          "pins": [
            {
              "a": {
                "chip": "BC11",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth3/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC11",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth3/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC11",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth3/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC11",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth3/16",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC11",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "51": {
        "mapping": {
          "id": 51,
          "name": "eth4/5/1",
          "controllingPort": 51,
          "pins": [
            {
              "a": {
                "chip": "BC12",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth4/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth4/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth4/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth4/5",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "52": {
        "mapping": {
          "id": 52,
          "name": "eth4/6/1",
          "controllingPort": 51,
          "pins": [
            {
              "a": {
                "chip": "BC12",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth4/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth4/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth4/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC12",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth4/6",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC12",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "53": {
        "mapping": {
          "id": 53,
          "name": "eth2/7/1",
          "controllingPort": 53,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth2/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC13",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth2/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC13",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth2/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC13",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth2/7",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "54": {
        "mapping": {
          "id": 54,
          "name": "eth2/8/1",
          "controllingPort": 53,
          "pins": [
            {
              "a": {
                "chip": "BC13",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth2/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC13",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth2/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC13",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth2/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC13",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth2/8",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC13",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "55": {
        "mapping": {
          "id": 55,
          "name": "eth5/15/1",
          "controllingPort": 55,
          "pins": [
            {
              "a": {
                "chip": "BC14",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth5/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth5/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth5/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth5/15",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "56": {
        "mapping": {
          "id": 56,
          "name": "eth5/16/1",
          "controllingPort": 55,
          "pins": [
            {
              "a": {
                "chip": "BC14",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth5/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth5/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth5/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC14",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth5/16",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC14",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "57": {
        "mapping": {
          "id": 57,
          "name": "eth3/13/1",
          "controllingPort": 57,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth3/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC15",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth3/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC15",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth3/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC15",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth3/13",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "58": {
        "mapping": {
          "id": 58,
          "name": "eth3/14/1",
          "controllingPort": 57,
          "pins": [
            {
              "a": {
                "chip": "BC15",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth3/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC15",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth3/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC15",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth3/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC15",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth3/14",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC15",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "68": {
        "mapping": {
          "id": 68,
          "name": "eth2/9/1",
          "controllingPort": 68,
          "pins": [
            {
              "a": {
                "chip": "BC16",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth2/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth2/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth2/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth2/9",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "69": {
        "mapping": {
          "id": 69,
          "name": "eth2/10/1",
          "controllingPort": 68,
          "pins": [
            {
              "a": {
                "chip": "BC16",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth2/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth2/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth2/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC16",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth2/10",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC16",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "70": {
        "mapping": {
          "id": 70,
          "name": "eth3/3/1",
          "controllingPort": 70,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth3/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC17",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth3/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC17",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth3/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC17",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth3/3",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "71": {
        "mapping": {
          "id": 71,
          "name": "eth3/4/1",
          "controllingPort": 70,
          "pins": [
            {
              "a": {
                "chip": "BC17",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth3/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC17",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth3/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC17",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth3/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC17",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth3/4",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC17",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "72": {
        "mapping": {
          "id": 72,
          "name": "eth5/1/1",
          "controllingPort": 72,
          "pins": [
            {
              "a": {
                "chip": "BC18",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth5/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth5/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth5/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth5/1",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "73": {
        "mapping": {
          "id": 73,
          "name": "eth5/2/1",
          "controllingPort": 72,
          "pins": [
            {
              "a": {
                "chip": "BC18",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth5/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth5/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth5/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC18",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth5/2",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC18",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "74": {
        "mapping": {
          "id": 74,
          "name": "eth4/11/1",
          "controllingPort": 74,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth4/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC19",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth4/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC19",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth4/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC19",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth4/11",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "75": {
        "mapping": {
          "id": 75,
          "name": "eth4/12/1",
          "controllingPort": 74,
          "pins": [
            {
              "a": {
                "chip": "BC19",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth4/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC19",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth4/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC19",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth4/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC19",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth4/12",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC19",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "85": {
        "mapping": {
          "id": 85,
          "name": "eth3/1/1",
          "controllingPort": 85,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth3/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC20",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth3/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC20",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth3/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC20",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth3/1",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "86": {
        "mapping": {
          "id": 86,
          "name": "eth3/2/1",
          "controllingPort": 85,
          "pins": [
            {
              "a": {
                "chip": "BC20",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth3/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC20",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth3/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC20",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth3/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC20",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth3/2",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC20",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "87": {
        "mapping": {
          "id": 87,
          "name": "eth2/11/1",
          "controllingPort": 87,
          "pins": [
            {
              "a": {
                "chip": "BC21",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth2/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth2/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth2/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth2/11",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "88": {
        "mapping": {
          "id": 88,
          "name": "eth2/12/1",
          "controllingPort": 87,
          "pins": [
            {
              "a": {
                "chip": "BC21",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth2/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth2/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth2/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC21",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth2/12",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC21",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "89": {
        "mapping": {
          "id": 89,
          "name": "eth4/9/1",
          "controllingPort": 89,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth4/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC22",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth4/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC22",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth4/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC22",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth4/9",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "90": {
        "mapping": {
          "id": 90,
          "name": "eth4/10/1",
          "controllingPort": 89,
          "pins": [
            {
              "a": {
                "chip": "BC22",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth4/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC22",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth4/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC22",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth4/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC22",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth4/10",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC22",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "91": {
        "mapping": {
          "id": 91,
          "name": "eth5/3/1",
          "controllingPort": 91,
          "pins": [
            {
              "a": {
                "chip": "BC23",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth5/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth5/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth5/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth5/3",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "92": {
        "mapping": {
          "id": 92,
          "name": "eth5/4/1",
          "controllingPort": 91,
          "pins": [
            {
              "a": {
                "chip": "BC23",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth5/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth5/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth5/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC23",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth5/4",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC23",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "102": {
        "mapping": {
          "id": 102,
          "name": "eth3/7/1",
          "controllingPort": 102,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth3/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC24",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth3/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC24",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth3/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC24",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth3/7",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "103": {
        "mapping": {
          "id": 103,
          "name": "eth3/8/1",
          "controllingPort": 102,
          "pins": [
            {
              "a": {
                "chip": "BC24",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth3/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC24",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth3/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC24",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth3/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC24",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth3/8",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC24",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "104": {
        "mapping": {
          "id": 104,
          "name": "eth4/15/1",
          "controllingPort": 104,
          "pins": [
            {
              "a": {
                "chip": "BC25",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth4/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth4/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth4/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth4/15",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "105": {
        "mapping": {
          "id": 105,
          "name": "eth4/16/1",
          "controllingPort": 104,
          "pins": [
            {
              "a": {
                "chip": "BC25",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth4/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth4/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth4/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC25",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth4/16",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC25",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "106": {
        "mapping": {
          "id": 106,
          "name": "eth5/5/1",
          "controllingPort": 106,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth5/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC26",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth5/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC26",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth5/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC26",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth5/5",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "107": {
        "mapping": {
          "id": 107,
          "name": "eth5/6/1",
          "controllingPort": 106,
          "pins": [
            {
              "a": {
                "chip": "BC26",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth5/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC26",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth5/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC26",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth5/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC26",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth5/6",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC26",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "108": {
        "mapping": {
          "id": 108,
          "name": "eth2/13/1",
          "controllingPort": 108,
          "pins": [
            {
              "a": {
                "chip": "BC27",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth2/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth2/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth2/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth2/13",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "109": {
        "mapping": {
          "id": 109,
          "name": "eth2/14/1",
          "controllingPort": 108,
          "pins": [
            {
              "a": {
                "chip": "BC27",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth2/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth2/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth2/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC27",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth2/14",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC27",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "119": {
        "mapping": {
          "id": 119,
          "name": "eth3/5/1",
          "controllingPort": 119,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth3/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC28",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth3/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC28",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth3/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC28",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth3/5",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "120": {
        "mapping": {
          "id": 120,
          "name": "eth3/6/1",
          "controllingPort": 119,
          "pins": [
            {
              "a": {
                "chip": "BC28",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth3/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC28",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth3/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC28",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth3/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC28",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth3/6",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC28",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth3/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth3/6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "121": {
        "mapping": {
          "id": 121,
          "name": "eth4/13/1",
          "controllingPort": 121,
          "pins": [
            {
              "a": {
                "chip": "BC29",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth4/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth4/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth4/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth4/13",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "122": {
        "mapping": {
          "id": 122,
          "name": "eth4/14/1",
          "controllingPort": 121,
          "pins": [
            {
              "a": {
                "chip": "BC29",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth4/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth4/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth4/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC29",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth4/14",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC29",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth4/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth4/14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "123": {
        "mapping": {
          "id": 123,
          "name": "eth5/7/1",
          "controllingPort": 123,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth5/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC30",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth5/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC30",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth5/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC30",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth5/7",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "124": {
        "mapping": {
          "id": 124,
          "name": "eth5/8/1",
          "controllingPort": 123,
          "pins": [
            {
              "a": {
                "chip": "BC30",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth5/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC30",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth5/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC30",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth5/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC30",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth5/8",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC30",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth5/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth5/8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "125": {
        "mapping": {
          "id": 125,
          "name": "eth2/15/1",
          "controllingPort": 125,
          "pins": [
            {
              "a": {
                "chip": "BC31",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth2/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth2/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth2/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth2/15",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "126": {
        "mapping": {
          "id": 126,
          "name": "eth2/16/1",
          "controllingPort": 125,
          "pins": [
            {
              "a": {
                "chip": "BC31",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth2/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth2/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth2/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC31",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth2/16",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC31",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth2/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth2/16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "136": {
        "mapping": {
          "id": 136,
          "name": "eth6/7/1",
          "controllingPort": 136,
          "pins": [
            {
              "a": {
                "chip": "BC32",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth6/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC32",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth6/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC32",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth6/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC32",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth6/7",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "137": {
        "mapping": {
          "id": 137,
          "name": "eth6/8/1",
          "controllingPort": 136,
          "pins": [
            {
              "a": {
                "chip": "BC32",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth6/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC32",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth6/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC32",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth6/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC32",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth6/8",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC32",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "138": {
        "mapping": {
          "id": 138,
          "name": "eth9/15/1",
          "controllingPort": 138,
          "pins": [
            {
              "a": {
                "chip": "BC33",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth9/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC33",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth9/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC33",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth9/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC33",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth9/15",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "139": {
        "mapping": {
          "id": 139,
          "name": "eth9/16/1",
          "controllingPort": 138,
          "pins": [
            {
              "a": {
                "chip": "BC33",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth9/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC33",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth9/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC33",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth9/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC33",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth9/16",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC33",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "140": {
        "mapping": {
          "id": 140,
          "name": "eth7/13/1",
          "controllingPort": 140,
          "pins": [
            {
              "a": {
                "chip": "BC34",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth7/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC34",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth7/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC34",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth7/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC34",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth7/13",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "141": {
        "mapping": {
          "id": 141,
          "name": "eth7/14/1",
          "controllingPort": 140,
          "pins": [
            {
              "a": {
                "chip": "BC34",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth7/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC34",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth7/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC34",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth7/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC34",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth7/14",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC34",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "142": {
        "mapping": {
          "id": 142,
          "name": "eth8/5/1",
          "controllingPort": 142,
          "pins": [
            {
              "a": {
                "chip": "BC35",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth8/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC35",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth8/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC35",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth8/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC35",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth8/5",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "143": {
        "mapping": {
          "id": 143,
          "name": "eth8/6/1",
          "controllingPort": 142,
          "pins": [
            {
              "a": {
                "chip": "BC35",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth8/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC35",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth8/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC35",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth8/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC35",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth8/6",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC35",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "153": {
        "mapping": {
          "id": 153,
          "name": "eth9/13/1",
          "controllingPort": 153,
          "pins": [
            {
              "a": {
                "chip": "BC36",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth9/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC36",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth9/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC36",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth9/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC36",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth9/13",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "154": {
        "mapping": {
          "id": 154,
          "name": "eth9/14/1",
          "controllingPort": 153,
          "pins": [
            {
              "a": {
                "chip": "BC36",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth9/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC36",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth9/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC36",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth9/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC36",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth9/14",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC36",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "155": {
        "mapping": {
          "id": 155,
          "name": "eth6/5/1",
          "controllingPort": 155,
          "pins": [
            {
              "a": {
                "chip": "BC37",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth6/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC37",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth6/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC37",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth6/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC37",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth6/5",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "156": {
        "mapping": {
          "id": 156,
          "name": "eth6/6/1",
          "controllingPort": 155,
          "pins": [
            {
              "a": {
                "chip": "BC37",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth6/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC37",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth6/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC37",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth6/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC37",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth6/6",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC37",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "157": {
        "mapping": {
          "id": 157,
          "name": "eth7/15/1",
          "controllingPort": 157,
          "pins": [
            {
              "a": {
                "chip": "BC38",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth7/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC38",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth7/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC38",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth7/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC38",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth7/15",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "158": {
        "mapping": {
          "id": 158,
          "name": "eth7/16/1",
          "controllingPort": 157,
          "pins": [
            {
              "a": {
                "chip": "BC38",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth7/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC38",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth7/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC38",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth7/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC38",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth7/16",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC38",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "159": {
        "mapping": {
          "id": 159,
          "name": "eth8/7/1",
          "controllingPort": 159,
          "pins": [
            {
              "a": {
                "chip": "BC39",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth8/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC39",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth8/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC39",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth8/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC39",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth8/7",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "160": {
        "mapping": {
          "id": 160,
          "name": "eth8/8/1",
          "controllingPort": 159,
          "pins": [
            {
              "a": {
                "chip": "BC39",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth8/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC39",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth8/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC39",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth8/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC39",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth8/8",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC39",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "170": {
        "mapping": {
          "id": 170,
          "name": "eth6/3/1",
          "controllingPort": 170,
          "pins": [
            {
              "a": {
                "chip": "BC40",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth6/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC40",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth6/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC40",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth6/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC40",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth6/3",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "171": {
        "mapping": {
          "id": 171,
          "name": "eth6/4/1",
          "controllingPort": 170,
          "pins": [
            {
              "a": {
                "chip": "BC40",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth6/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC40",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth6/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC40",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth6/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC40",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth6/4",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC40",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "172": {
        "mapping": {
          "id": 172,
          "name": "eth7/9/1",
          "controllingPort": 172,
          "pins": [
            {
              "a": {
                "chip": "BC41",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth7/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC41",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth7/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC41",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth7/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC41",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth7/9",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "173": {
        "mapping": {
          "id": 173,
          "name": "eth7/10/1",
          "controllingPort": 172,
          "pins": [
            {
              "a": {
                "chip": "BC41",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth7/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC41",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth7/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC41",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth7/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC41",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth7/10",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC41",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "174": {
        "mapping": {
          "id": 174,
          "name": "eth9/11/1",
          "controllingPort": 174,
          "pins": [
            {
              "a": {
                "chip": "BC42",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth9/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC42",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth9/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC42",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth9/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC42",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth9/11",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "175": {
        "mapping": {
          "id": 175,
          "name": "eth9/12/1",
          "controllingPort": 174,
          "pins": [
            {
              "a": {
                "chip": "BC42",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth9/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC42",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth9/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC42",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth9/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC42",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth9/12",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC42",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "176": {
        "mapping": {
          "id": 176,
          "name": "eth8/1/1",
          "controllingPort": 176,
          "pins": [
            {
              "a": {
                "chip": "BC43",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth8/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC43",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth8/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC43",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth8/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC43",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth8/1",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "177": {
        "mapping": {
          "id": 177,
          "name": "eth8/2/1",
          "controllingPort": 176,
          "pins": [
            {
              "a": {
                "chip": "BC43",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth8/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC43",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth8/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC43",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth8/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC43",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth8/2",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC43",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "187": {
        "mapping": {
          "id": 187,
          "name": "eth7/11/1",
          "controllingPort": 187,
          "pins": [
            {
              "a": {
                "chip": "BC44",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth7/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC44",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth7/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC44",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth7/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC44",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth7/11",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "188": {
        "mapping": {
          "id": 188,
          "name": "eth7/12/1",
          "controllingPort": 187,
          "pins": [
            {
              "a": {
                "chip": "BC44",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth7/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC44",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth7/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC44",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth7/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC44",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth7/12",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC44",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "189": {
        "mapping": {
          "id": 189,
          "name": "eth6/1/1",
          "controllingPort": 189,
          "pins": [
            {
              "a": {
                "chip": "BC45",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth6/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC45",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth6/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC45",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth6/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC45",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth6/1",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "190": {
        "mapping": {
          "id": 190,
          "name": "eth6/2/1",
          "controllingPort": 189,
          "pins": [
            {
              "a": {
                "chip": "BC45",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth6/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC45",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth6/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC45",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth6/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC45",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth6/2",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC45",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "191": {
        "mapping": {
          "id": 191,
          "name": "eth8/3/1",
          "controllingPort": 191,
          "pins": [
            {
              "a": {
                "chip": "BC46",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth8/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC46",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth8/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC46",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth8/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC46",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth8/3",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "192": {
        "mapping": {
          "id": 192,
          "name": "eth8/4/1",
          "controllingPort": 191,
          "pins": [
            {
              "a": {
                "chip": "BC46",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth8/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC46",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth8/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC46",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth8/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC46",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth8/4",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC46",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "193": {
        "mapping": {
          "id": 193,
          "name": "eth9/9/1",
          "controllingPort": 193,
          "pins": [
            {
              "a": {
                "chip": "BC47",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth9/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC47",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth9/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC47",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth9/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC47",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth9/9",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "194": {
        "mapping": {
          "id": 194,
          "name": "eth9/10/1",
          "controllingPort": 193,
          "pins": [
            {
              "a": {
                "chip": "BC47",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth9/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC47",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth9/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC47",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth9/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC47",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth9/10",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC47",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "204": {
        "mapping": {
          "id": 204,
          "name": "eth8/13/1",
          "controllingPort": 204,
          "pins": [
            {
              "a": {
                "chip": "BC48",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth8/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC48",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth8/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC48",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth8/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC48",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth8/13",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "205": {
        "mapping": {
          "id": 205,
          "name": "eth8/14/1",
          "controllingPort": 204,
          "pins": [
            {
              "a": {
                "chip": "BC48",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth8/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC48",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth8/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC48",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth8/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC48",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth8/14",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC48",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "206": {
        "mapping": {
          "id": 206,
          "name": "eth6/15/1",
          "controllingPort": 206,
          "pins": [
            {
              "a": {
                "chip": "BC49",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth6/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC49",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth6/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC49",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth6/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC49",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth6/15",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "207": {
        "mapping": {
          "id": 207,
          "name": "eth6/16/1",
          "controllingPort": 206,
          "pins": [
            {
              "a": {
                "chip": "BC49",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth6/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC49",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth6/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC49",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth6/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC49",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth6/16",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC49",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "208": {
        "mapping": {
          "id": 208,
          "name": "eth9/7/1",
          "controllingPort": 208,
          "pins": [
            {
              "a": {
                "chip": "BC50",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth9/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC50",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth9/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC50",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth9/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC50",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth9/7",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "209": {
        "mapping": {
          "id": 209,
          "name": "eth9/8/1",
          "controllingPort": 208,
          "pins": [
            {
              "a": {
                "chip": "BC50",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth9/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC50",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth9/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC50",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth9/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC50",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth9/8",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC50",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "210": {
        "mapping": {
          "id": 210,
          "name": "eth7/5/1",
          "controllingPort": 210,
          "pins": [
            {
              "a": {
                "chip": "BC51",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth7/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC51",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth7/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC51",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth7/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC51",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth7/5",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "211": {
        "mapping": {
          "id": 211,
          "name": "eth7/6/1",
          "controllingPort": 210,
          "pins": [
            {
              "a": {
                "chip": "BC51",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth7/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC51",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth7/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC51",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth7/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC51",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth7/6",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC51",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "221": {
        "mapping": {
          "id": 221,
          "name": "eth8/15/1",
          "controllingPort": 221,
          "pins": [
            {
              "a": {
                "chip": "BC52",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth8/15",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC52",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth8/15",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC52",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth8/15",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC52",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth8/15",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/15",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/15",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/15",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/15",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/15",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "222": {
        "mapping": {
          "id": 222,
          "name": "eth8/16/1",
          "controllingPort": 221,
          "pins": [
            {
              "a": {
                "chip": "BC52",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth8/16",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC52",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth8/16",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC52",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth8/16",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC52",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth8/16",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/16",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC52",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/16",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/16",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/16",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/16",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "223": {
        "mapping": {
          "id": 223,
          "name": "eth6/13/1",
          "controllingPort": 223,
          "pins": [
            {
              "a": {
                "chip": "BC53",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth6/13",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC53",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth6/13",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC53",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth6/13",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC53",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth6/13",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/13",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/13",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/13",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/13",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/13",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "224": {
        "mapping": {
          "id": 224,
          "name": "eth6/14/1",
          "controllingPort": 223,
          "pins": [
            {
              "a": {
                "chip": "BC53",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth6/14",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC53",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth6/14",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC53",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth6/14",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC53",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth6/14",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/14",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC53",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/14",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/14",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/14",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/14",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "225": {
        "mapping": {
          "id": 225,
          "name": "eth9/5/1",
          "controllingPort": 225,
          "pins": [
            {
              "a": {
                "chip": "BC54",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth9/5",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC54",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth9/5",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC54",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth9/5",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC54",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth9/5",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/5",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/5",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/5",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/5",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/5",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "226": {
        "mapping": {
          "id": 226,
          "name": "eth9/6/1",
          "controllingPort": 225,
          "pins": [
            {
              "a": {
                "chip": "BC54",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth9/6",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC54",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth9/6",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC54",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth9/6",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC54",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth9/6",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/6",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC54",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/6",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/6",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/6",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/6",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "227": {
        "mapping": {
          "id": 227,
          "name": "eth7/7/1",
          "controllingPort": 227,
          "pins": [
            {
              "a": {
                "chip": "BC55",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth7/7",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC55",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth7/7",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC55",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth7/7",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC55",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth7/7",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/7",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/7",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/7",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/7",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/7",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "228": {
        "mapping": {
          "id": 228,
          "name": "eth7/8/1",
          "controllingPort": 227,
          "pins": [
            {
              "a": {
                "chip": "BC55",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth7/8",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC55",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth7/8",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC55",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth7/8",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC55",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth7/8",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/8",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC55",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/8",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/8",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/8",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/8",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "238": {
        "mapping": {
          "id": 238,
          "name": "eth8/9/1",
          "controllingPort": 238,
          "pins": [
            {
              "a": {
                "chip": "BC56",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth8/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC56",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth8/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC56",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth8/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC56",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth8/9",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "239": {
        "mapping": {
          "id": 239,
          "name": "eth8/10/1",
          "controllingPort": 238,
          "pins": [
            {
              "a": {
                "chip": "BC56",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth8/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC56",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth8/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC56",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth8/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC56",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth8/10",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC56",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "240": {
        "mapping": {
          "id": 240,
          "name": "eth6/11/1",
          "controllingPort": 240,
          "pins": [
            {
              "a": {
                "chip": "BC57",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth6/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC57",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth6/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC57",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth6/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC57",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth6/11",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "241": {
        "mapping": {
          "id": 241,
          "name": "eth6/12/1",
          "controllingPort": 240,
          "pins": [
            {
              "a": {
                "chip": "BC57",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth6/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC57",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth6/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC57",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth6/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC57",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth6/12",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC57",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "242": {
        "mapping": {
          "id": 242,
          "name": "eth9/3/1",
          "controllingPort": 242,
          "pins": [
            {
              "a": {
                "chip": "BC58",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth9/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC58",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth9/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC58",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth9/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC58",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth9/3",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "243": {
        "mapping": {
          "id": 243,
          "name": "eth9/4/1",
          "controllingPort": 242,
          "pins": [
            {
              "a": {
                "chip": "BC58",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth9/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC58",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth9/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC58",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth9/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC58",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth9/4",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC58",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "244": {
        "mapping": {
          "id": 244,
          "name": "eth7/1/1",
          "controllingPort": 244,
          "pins": [
            {
              "a": {
                "chip": "BC59",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth7/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC59",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth7/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC59",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth7/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC59",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth7/1",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "245": {
        "mapping": {
          "id": 245,
          "name": "eth7/2/1",
          "controllingPort": 244,
          "pins": [
            {
              "a": {
                "chip": "BC59",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth7/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC59",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth7/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC59",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth7/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC59",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth7/2",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC59",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "255": {
        "mapping": {
          "id": 255,
          "name": "eth8/11/1",
          "controllingPort": 255,
          "pins": [
            {
              "a": {
                "chip": "BC60",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth8/11",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC60",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth8/11",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC60",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth8/11",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC60",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth8/11",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/11",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/11",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/11",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/11",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/11",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "256": {
        "mapping": {
          "id": 256,
          "name": "eth8/12/1",
          "controllingPort": 255,
          "pins": [
            {
              "a": {
                "chip": "BC60",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth8/12",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC60",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth8/12",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC60",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth8/12",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC60",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth8/12",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/12",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC60",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth8/12",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/12",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/12",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth8/12",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "257": {
        "mapping": {
          "id": 257,
          "name": "eth6/9/1",
          "controllingPort": 257,
          "pins": [
            {
              "a": {
                "chip": "BC61",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth6/9",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC61",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth6/9",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC61",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth6/9",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC61",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth6/9",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/9",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/9",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/9",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/9",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/9",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "258": {
        "mapping": {
          "id": 258,
          "name": "eth6/10/1",
          "controllingPort": 257,
          "pins": [
            {
              "a": {
                "chip": "BC61",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth6/10",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC61",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth6/10",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC61",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth6/10",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC61",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth6/10",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/10",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC61",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth6/10",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/10",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/10",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth6/10",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "259": {
        "mapping": {
          "id": 259,
          "name": "eth9/1/1",
          "controllingPort": 259,
          "pins": [
            {
              "a": {
                "chip": "BC62",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth9/1",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC62",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth9/1",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC62",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth9/1",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC62",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth9/1",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/1",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/1",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/1",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/1",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/1",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "260": {
        "mapping": {
          "id": 260,
          "name": "eth9/2/1",
          "controllingPort": 259,
          "pins": [
            {
              "a": {
                "chip": "BC62",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth9/2",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC62",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth9/2",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC62",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth9/2",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC62",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth9/2",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/2",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC62",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth9/2",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/2",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/2",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth9/2",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "261": {
        "mapping": {
          "id": 261,
          "name": "eth7/3/1",
          "controllingPort": 261,
          "pins": [
            {
              "a": {
                "chip": "BC63",
                "lane": 0
              },
              "z": {
                "end": {
                  "chip": "eth7/3",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC63",
                "lane": 1
              },
              "z": {
                "end": {
                  "chip": "eth7/3",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC63",
                "lane": 2
              },
              "z": {
                "end": {
                  "chip": "eth7/3",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC63",
                "lane": 3
              },
              "z": {
                "end": {
                  "chip": "eth7/3",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/3",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 3
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/3",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/3",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/3",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/3",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    },
    "262": {
        "mapping": {
          "id": 262,
          "name": "eth7/4/1",
          "controllingPort": 261,
          "pins": [
            {
              "a": {
                "chip": "BC63",
                "lane": 4
              },
              "z": {
                "end": {
                  "chip": "eth7/4",
                  "lane": 0
                }
              }
            },
            {
              "a": {
                "chip": "BC63",
                "lane": 5
              },
              "z": {
                "end": {
                  "chip": "eth7/4",
                  "lane": 1
                }
              }
            },
            {
              "a": {
                "chip": "BC63",
                "lane": 6
              },
              "z": {
                "end": {
                  "chip": "eth7/4",
                  "lane": 2
                }
              }
            },
            {
              "a": {
                "chip": "BC63",
                "lane": 7
              },
              "z": {
                "end": {
                  "chip": "eth7/4",
                  "lane": 3
                }
              }
            }
          ]
        },
        "supportedProfiles": {
          "23": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/4",
                      "lane": 3
                    }
                  }
                ]
              }
          },
          "25": {
              "pins": {
                "iphy": [
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 4
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 5
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 6
                    }
                  },
                  {
                    "id": {
                      "chip": "BC63",
                      "lane": 7
                    }
                  }
                ],
                "transceiver": [
                  {
                    "id": {
                      "chip": "eth7/4",
                      "lane": 0
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/4",
                      "lane": 1
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/4",
                      "lane": 2
                    }
                  },
                  {
                    "id": {
                      "chip": "eth7/4",
                      "lane": 3
                    }
                  }
                ]
              }
          }
        }
    }
  },
  "supportedProfiles": {
    "23": {
        "speed": 100000,
        "iphy": {
          "numLanes": 4,
          "modulation": 1,
          "fec": 528,
          "medium": 3,
          "interfaceMode": 3,
          "interfaceType": 3
        }
    },
    "25": {
        "speed": 200000,
        "iphy": {
          "numLanes": 4,
          "modulation": 2,
          "fec": 11,
          "medium": 3,
          "interfaceMode": 3,
          "interfaceType": 3
        }
    }
  },
  "chips": [
    {
      "name": "BC1",
      "type": 1,
      "physicalID": 1
    },
    {
      "name": "BC5",
      "type": 1,
      "physicalID": 5
    },
    {
      "name": "BC9",
      "type": 1,
      "physicalID": 9
    },
    {
      "name": "BC13",
      "type": 1,
      "physicalID": 13
    },
    {
      "name": "BC16",
      "type": 1,
      "physicalID": 16
    },
    {
      "name": "BC21",
      "type": 1,
      "physicalID": 21
    },
    {
      "name": "BC27",
      "type": 1,
      "physicalID": 27
    },
    {
      "name": "BC31",
      "type": 1,
      "physicalID": 31
    },
    {
      "name": "BC20",
      "type": 1,
      "physicalID": 20
    },
    {
      "name": "BC17",
      "type": 1,
      "physicalID": 17
    },
    {
      "name": "BC28",
      "type": 1,
      "physicalID": 28
    },
    {
      "name": "BC24",
      "type": 1,
      "physicalID": 24
    },
    {
      "name": "BC7",
      "type": 1,
      "physicalID": 7
    },
    {
      "name": "BC3",
      "type": 1,
      "physicalID": 3
    },
    {
      "name": "BC15",
      "type": 1,
      "physicalID": 15
    },
    {
      "name": "BC11",
      "type": 1,
      "physicalID": 11
    },
    {
      "name": "BC4",
      "type": 1,
      "physicalID": 4
    },
    {
      "name": "BC0",
      "type": 1,
      "physicalID": 0
    },
    {
      "name": "BC12",
      "type": 1,
      "physicalID": 12
    },
    {
      "name": "BC8",
      "type": 1,
      "physicalID": 8
    },
    {
      "name": "BC22",
      "type": 1,
      "physicalID": 22
    },
    {
      "name": "BC19",
      "type": 1,
      "physicalID": 19
    },
    {
      "name": "BC29",
      "type": 1,
      "physicalID": 29
    },
    {
      "name": "BC25",
      "type": 1,
      "physicalID": 25
    },
    {
      "name": "BC18",
      "type": 1,
      "physicalID": 18
    },
    {
      "name": "BC23",
      "type": 1,
      "physicalID": 23
    },
    {
      "name": "BC26",
      "type": 1,
      "physicalID": 26
    },
    {
      "name": "BC30",
      "type": 1,
      "physicalID": 30
    },
    {
      "name": "BC2",
      "type": 1,
      "physicalID": 2
    },
    {
      "name": "BC6",
      "type": 1,
      "physicalID": 6
    },
    {
      "name": "BC10",
      "type": 1,
      "physicalID": 10
    },
    {
      "name": "BC14",
      "type": 1,
      "physicalID": 14
    },
    {
      "name": "BC45",
      "type": 1,
      "physicalID": 45
    },
    {
      "name": "BC40",
      "type": 1,
      "physicalID": 40
    },
    {
      "name": "BC37",
      "type": 1,
      "physicalID": 37
    },
    {
      "name": "BC32",
      "type": 1,
      "physicalID": 32
    },
    {
      "name": "BC61",
      "type": 1,
      "physicalID": 61
    },
    {
      "name": "BC57",
      "type": 1,
      "physicalID": 57
    },
    {
      "name": "BC53",
      "type": 1,
      "physicalID": 53
    },
    {
      "name": "BC49",
      "type": 1,
      "physicalID": 49
    },
    {
      "name": "BC59",
      "type": 1,
      "physicalID": 59
    },
    {
      "name": "BC63",
      "type": 1,
      "physicalID": 63
    },
    {
      "name": "BC51",
      "type": 1,
      "physicalID": 51
    },
    {
      "name": "BC55",
      "type": 1,
      "physicalID": 55
    },
    {
      "name": "BC41",
      "type": 1,
      "physicalID": 41
    },
    {
      "name": "BC44",
      "type": 1,
      "physicalID": 44
    },
    {
      "name": "BC34",
      "type": 1,
      "physicalID": 34
    },
    {
      "name": "BC38",
      "type": 1,
      "physicalID": 38
    },
    {
      "name": "BC43",
      "type": 1,
      "physicalID": 43
    },
    {
      "name": "BC46",
      "type": 1,
      "physicalID": 46
    },
    {
      "name": "BC35",
      "type": 1,
      "physicalID": 35
    },
    {
      "name": "BC39",
      "type": 1,
      "physicalID": 39
    },
    {
      "name": "BC56",
      "type": 1,
      "physicalID": 56
    },
    {
      "name": "BC60",
      "type": 1,
      "physicalID": 60
    },
    {
      "name": "BC48",
      "type": 1,
      "physicalID": 48
    },
    {
      "name": "BC52",
      "type": 1,
      "physicalID": 52
    },
    {
      "name": "BC62",
      "type": 1,
      "physicalID": 62
    },
    {
      "name": "BC58",
      "type": 1,
      "physicalID": 58
    },
    {
      "name": "BC54",
      "type": 1,
      "physicalID": 54
    },
    {
      "name": "BC50",
      "type": 1,
      "physicalID": 50
    },
    {
      "name": "BC47",
      "type": 1,
      "physicalID": 47
    },
    {
      "name": "BC42",
      "type": 1,
      "physicalID": 42
    },
    {
      "name": "BC36",
      "type": 1,
      "physicalID": 36
    },
    {
      "name": "BC33",
      "type": 1,
      "physicalID": 33
    },
    {
      "name": "eth2/1",
      "type": 3,
      "physicalID": 0
    },
    {
      "name": "eth2/2",
      "type": 3,
      "physicalID": 1
    },
    {
      "name": "eth2/3",
      "type": 3,
      "physicalID": 2
    },
    {
      "name": "eth2/4",
      "type": 3,
      "physicalID": 3
    },
    {
      "name": "eth2/5",
      "type": 3,
      "physicalID": 4
    },
    {
      "name": "eth2/6",
      "type": 3,
      "physicalID": 5
    },
    {
      "name": "eth2/7",
      "type": 3,
      "physicalID": 6
    },
    {
      "name": "eth2/8",
      "type": 3,
      "physicalID": 7
    },
    {
      "name": "eth2/9",
      "type": 3,
      "physicalID": 8
    },
    {
      "name": "eth2/10",
      "type": 3,
      "physicalID": 9
    },
    {
      "name": "eth2/11",
      "type": 3,
      "physicalID": 10
    },
    {
      "name": "eth2/12",
      "type": 3,
      "physicalID": 11
    },
    {
      "name": "eth2/13",
      "type": 3,
      "physicalID": 12
    },
    {
      "name": "eth2/14",
      "type": 3,
      "physicalID": 13
    },
    {
      "name": "eth2/15",
      "type": 3,
      "physicalID": 14
    },
    {
      "name": "eth2/16",
      "type": 3,
      "physicalID": 15
    },
    {
      "name": "eth3/1",
      "type": 3,
      "physicalID": 16
    },
    {
      "name": "eth3/2",
      "type": 3,
      "physicalID": 17
    },
    {
      "name": "eth3/3",
      "type": 3,
      "physicalID": 18
    },
    {
      "name": "eth3/4",
      "type": 3,
      "physicalID": 19
    },
    {
      "name": "eth3/5",
      "type": 3,
      "physicalID": 20
    },
    {
      "name": "eth3/6",
      "type": 3,
      "physicalID": 21
    },
    {
      "name": "eth3/7",
      "type": 3,
      "physicalID": 22
    },
    {
      "name": "eth3/8",
      "type": 3,
      "physicalID": 23
    },
    {
      "name": "eth3/9",
      "type": 3,
      "physicalID": 24
    },
    {
      "name": "eth3/10",
      "type": 3,
      "physicalID": 25
    },
    {
      "name": "eth3/11",
      "type": 3,
      "physicalID": 26
    },
    {
      "name": "eth3/12",
      "type": 3,
      "physicalID": 27
    },
    {
      "name": "eth3/13",
      "type": 3,
      "physicalID": 28
    },
    {
      "name": "eth3/14",
      "type": 3,
      "physicalID": 29
    },
    {
      "name": "eth3/15",
      "type": 3,
      "physicalID": 30
    },
    {
      "name": "eth3/16",
      "type": 3,
      "physicalID": 31
    },
    {
      "name": "eth4/1",
      "type": 3,
      "physicalID": 32
    },
    {
      "name": "eth4/2",
      "type": 3,
      "physicalID": 33
    },
    {
      "name": "eth4/3",
      "type": 3,
      "physicalID": 34
    },
    {
      "name": "eth4/4",
      "type": 3,
      "physicalID": 35
    },
    {
      "name": "eth4/5",
      "type": 3,
      "physicalID": 36
    },
    {
      "name": "eth4/6",
      "type": 3,
      "physicalID": 37
    },
    {
      "name": "eth4/7",
      "type": 3,
      "physicalID": 38
    },
    {
      "name": "eth4/8",
      "type": 3,
      "physicalID": 39
    },
    {
      "name": "eth4/9",
      "type": 3,
      "physicalID": 40
    },
    {
      "name": "eth4/10",
      "type": 3,
      "physicalID": 41
    },
    {
      "name": "eth4/11",
      "type": 3,
      "physicalID": 42
    },
    {
      "name": "eth4/12",
      "type": 3,
      "physicalID": 43
    },
    {
      "name": "eth4/13",
      "type": 3,
      "physicalID": 44
    },
    {
      "name": "eth4/14",
      "type": 3,
      "physicalID": 45
    },
    {
      "name": "eth4/15",
      "type": 3,
      "physicalID": 46
    },
    {
      "name": "eth4/16",
      "type": 3,
      "physicalID": 47
    },
    {
      "name": "eth5/1",
      "type": 3,
      "physicalID": 48
    },
    {
      "name": "eth5/2",
      "type": 3,
      "physicalID": 49
    },
    {
      "name": "eth5/3",
      "type": 3,
      "physicalID": 50
    },
    {
      "name": "eth5/4",
      "type": 3,
      "physicalID": 51
    },
    {
      "name": "eth5/5",
      "type": 3,
      "physicalID": 52
    },
    {
      "name": "eth5/6",
      "type": 3,
      "physicalID": 53
    },
    {
      "name": "eth5/7",
      "type": 3,
      "physicalID": 54
    },
    {
      "name": "eth5/8",
      "type": 3,
      "physicalID": 55
    },
    {
      "name": "eth5/9",
      "type": 3,
      "physicalID": 56
    },
    {
      "name": "eth5/10",
      "type": 3,
      "physicalID": 57
    },
    {
      "name": "eth5/11",
      "type": 3,
      "physicalID": 58
    },
    {
      "name": "eth5/12",
      "type": 3,
      "physicalID": 59
    },
    {
      "name": "eth5/13",
      "type": 3,
      "physicalID": 60
    },
    {
      "name": "eth5/14",
      "type": 3,
      "physicalID": 61
    },
    {
      "name": "eth5/15",
      "type": 3,
      "physicalID": 62
    },
    {
      "name": "eth5/16",
      "type": 3,
      "physicalID": 63
    },
    {
      "name": "eth6/1",
      "type": 3,
      "physicalID": 64
    },
    {
      "name": "eth6/2",
      "type": 3,
      "physicalID": 65
    },
    {
      "name": "eth6/3",
      "type": 3,
      "physicalID": 66
    },
    {
      "name": "eth6/4",
      "type": 3,
      "physicalID": 67
    },
    {
      "name": "eth6/5",
      "type": 3,
      "physicalID": 68
    },
    {
      "name": "eth6/6",
      "type": 3,
      "physicalID": 69
    },
    {
      "name": "eth6/7",
      "type": 3,
      "physicalID": 70
    },
    {
      "name": "eth6/8",
      "type": 3,
      "physicalID": 71
    },
    {
      "name": "eth6/9",
      "type": 3,
      "physicalID": 72
    },
    {
      "name": "eth6/10",
      "type": 3,
      "physicalID": 73
    },
    {
      "name": "eth6/11",
      "type": 3,
      "physicalID": 74
    },
    {
      "name": "eth6/12",
      "type": 3,
      "physicalID": 75
    },
    {
      "name": "eth6/13",
      "type": 3,
      "physicalID": 76
    },
    {
      "name": "eth6/14",
      "type": 3,
      "physicalID": 77
    },
    {
      "name": "eth6/15",
      "type": 3,
      "physicalID": 78
    },
    {
      "name": "eth6/16",
      "type": 3,
      "physicalID": 79
    },
    {
      "name": "eth7/1",
      "type": 3,
      "physicalID": 80
    },
    {
      "name": "eth7/2",
      "type": 3,
      "physicalID": 81
    },
    {
      "name": "eth7/3",
      "type": 3,
      "physicalID": 82
    },
    {
      "name": "eth7/4",
      "type": 3,
      "physicalID": 83
    },
    {
      "name": "eth7/5",
      "type": 3,
      "physicalID": 84
    },
    {
      "name": "eth7/6",
      "type": 3,
      "physicalID": 85
    },
    {
      "name": "eth7/7",
      "type": 3,
      "physicalID": 86
    },
    {
      "name": "eth7/8",
      "type": 3,
      "physicalID": 87
    },
    {
      "name": "eth7/9",
      "type": 3,
      "physicalID": 88
    },
    {
      "name": "eth7/10",
      "type": 3,
      "physicalID": 89
    },
    {
      "name": "eth7/11",
      "type": 3,
      "physicalID": 90
    },
    {
      "name": "eth7/12",
      "type": 3,
      "physicalID": 91
    },
    {
      "name": "eth7/13",
      "type": 3,
      "physicalID": 92
    },
    {
      "name": "eth7/14",
      "type": 3,
      "physicalID": 93
    },
    {
      "name": "eth7/15",
      "type": 3,
      "physicalID": 94
    },
    {
      "name": "eth7/16",
      "type": 3,
      "physicalID": 95
    },
    {
      "name": "eth8/1",
      "type": 3,
      "physicalID": 96
    },
    {
      "name": "eth8/2",
      "type": 3,
      "physicalID": 97
    },
    {
      "name": "eth8/3",
      "type": 3,
      "physicalID": 98
    },
    {
      "name": "eth8/4",
      "type": 3,
      "physicalID": 99
    },
    {
      "name": "eth8/5",
      "type": 3,
      "physicalID": 100
    },
    {
      "name": "eth8/6",
      "type": 3,
      "physicalID": 101
    },
    {
      "name": "eth8/7",
      "type": 3,
      "physicalID": 102
    },
    {
      "name": "eth8/8",
      "type": 3,
      "physicalID": 103
    },
    {
      "name": "eth8/9",
      "type": 3,
      "physicalID": 104
    },
    {
      "name": "eth8/10",
      "type": 3,
      "physicalID": 105
    },
    {
      "name": "eth8/11",
      "type": 3,
      "physicalID": 106
    },
    {
      "name": "eth8/12",
      "type": 3,
      "physicalID": 107
    },
    {
      "name": "eth8/13",
      "type": 3,
      "physicalID": 108
    },
    {
      "name": "eth8/14",
      "type": 3,
      "physicalID": 109
    },
    {
      "name": "eth8/15",
      "type": 3,
      "physicalID": 110
    },
    {
      "name": "eth8/16",
      "type": 3,
      "physicalID": 111
    },
    {
      "name": "eth9/1",
      "type": 3,
      "physicalID": 112
    },
    {
      "name": "eth9/2",
      "type": 3,
      "physicalID": 113
    },
    {
      "name": "eth9/3",
      "type": 3,
      "physicalID": 114
    },
    {
      "name": "eth9/4",
      "type": 3,
      "physicalID": 115
    },
    {
      "name": "eth9/5",
      "type": 3,
      "physicalID": 116
    },
    {
      "name": "eth9/6",
      "type": 3,
      "physicalID": 117
    },
    {
      "name": "eth9/7",
      "type": 3,
      "physicalID": 118
    },
    {
      "name": "eth9/8",
      "type": 3,
      "physicalID": 119
    },
    {
      "name": "eth9/9",
      "type": 3,
      "physicalID": 120
    },
    {
      "name": "eth9/10",
      "type": 3,
      "physicalID": 121
    },
    {
      "name": "eth9/11",
      "type": 3,
      "physicalID": 122
    },
    {
      "name": "eth9/12",
      "type": 3,
      "physicalID": 123
    },
    {
      "name": "eth9/13",
      "type": 3,
      "physicalID": 124
    },
    {
      "name": "eth9/14",
      "type": 3,
      "physicalID": 125
    },
    {
      "name": "eth9/15",
      "type": 3,
      "physicalID": 126
    },
    {
      "name": "eth9/16",
      "type": 3,
      "physicalID": 127
    }
  ]
}
)";
} // namespace

namespace facebook::fboss {
Elbert16QPimPlatformMapping::Elbert16QPimPlatformMapping()
    : MultiPimPlatformMapping(kJsonPlatformMappingStr) {}
} // namespace facebook::fboss
