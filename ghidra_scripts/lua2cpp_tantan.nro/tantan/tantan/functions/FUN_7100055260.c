
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100055260(L2CValue *param_1,long param_2)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack112,HVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    iVar1 = lib::L2CValue::as_integer(aLStack128);
    HVar2 = app::lua_bind::MotionModule__motion_kind_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack64,HVar2);
    lib::L2CValue::operator=(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack128);
  }
  lib::L2CValue::L2CValue(aLStack64,0xf9ae7a82b);
  uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xe94ac3dfe);
    uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0x150b0ac4bb);
      uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x1416941371);
        uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0x1003eb428a);
          uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0xff55c2f44);
            uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,0x16f3753ca2);
              uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar3 & 1) == 0) {
                lib::L2CValue::L2CValue(aLStack64,0x1588d989db);
                uVar3 = lib::L2CValue::operator==(aLStack112,aLStack64);
                lib::L2CValue::~L2CValue(aLStack64);
                if ((uVar3 & 1) == 0) {
                  lib::L2CValue::L2CValue(aLStack64,0x112d37de61);
                  lib::L2CValue::operator=(aLStack80,aLStack64);
                  lib::L2CValue::~L2CValue(aLStack64);
                  lib::L2CValue::L2CValue(aLStack64,0x163412286f);
                  lib::L2CValue::operator=(aLStack96,aLStack64);
                  goto LAB_7100055510;
                }
              }
            }
          }
        }
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack64,0x11d738e302);
  lib::L2CValue::operator=(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x16ce1d150c);
  lib::L2CValue::operator=(aLStack96,aLStack64);
LAB_7100055510:
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(param_1,aLStack80);
  lib::L2CValue::L2CValue(param_1 + 0x10,aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

