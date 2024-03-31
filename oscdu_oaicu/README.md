# OSCoduOAIcu

The OSCoduOAIcu is a project of OSC O-DU & OAI CU Integration which aim to provide OSC O-DU a complete 5G NR CU solution

## How to build

### Compilation

Navigate to cmake_targets folder
```bash
cd <openairinterface5g Directory>/cmake_targets
```

Build OAI CU
```bash
# Build Command
$ ./build_oai --gNB
```

Navigate to Build folder
```bash
cd <l2 Directory>/l2/build/odu
```

Build OSC O-DU
```bash
# Build Command
$ make odu MACHINE=BIT64 MODE=FDD

# Clean code command
$ make clean_odu MACHINE=BIT64 MODE=FDD
```

Build OSC RIC_STUB
```bash
# Build Command
$ make ric_stub NODE=TEST_STUB MACHINE=BIT64 MODE=FDD

# Clean code command
$ make clean_ric NODE=TEST_STUB MACHINE=BIT64 MODE=FDD
```

## Execution
### Assign IP address for O-DU and O-CU

```bash
cd <l2>
# Modify the appropriate NIC
$ vim nic.sh
$ ./nic.sh
```

### Execute RIC_STUB

```bash
cd <l2 Directory>/bin/ric_stub
$ ./ric_stub
```

### Execute OAI CU (Now Testing in BAND 66 FDD mode)
```bash
cd <openairinterface5g Directory>/cmake_targets/ran_build/build/
$ sudo ./nr-softmodem -O ../../../ci-scripts/conf_files/cu.band66.tm1.106PRB.usrpb210.conf --sa
```

### Execute O-DU 

```bash
cd <l2 Directory>/bin/odu
$ ./odu
```