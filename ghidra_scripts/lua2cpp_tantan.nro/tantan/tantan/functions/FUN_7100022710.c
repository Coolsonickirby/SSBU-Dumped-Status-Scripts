
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100022710(L2CValue *param_1,long param_2)

{
  int iVar1;
  Hash40 HVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_L);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  HVar2 = app::lua_bind::MotionModule__motion_kind_partial_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,HVar2);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0x7fb997a80);
  uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,0xf52caf696);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xe5c816343);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0x1003eb428a);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0xff55c2f44);
          uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0x1074ec721c);
            uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,0xf825b1fd2);
              uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar3 & 1) == 0) goto LAB_7100022a60;
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue(param_1,true);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_TANTAN_MOTION_PART_SET_KIND_UPPER_BODY_R);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    HVar2 = app::lua_bind::MotionModule__motion_kind_partial_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack64,HVar2);
    lib::L2CValue::operator=(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack64,0xe5771ed94);
    uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xdc76c0a9c);
      uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,0xfede098bd);
        uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        if ((uVar3 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack64,0xee3ab0d68);
          uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
          lib::L2CValue::~L2CValue(aLStack64);
          if ((uVar3 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack64,0xf9ae7a82b);
            uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
            lib::L2CValue::~L2CValue(aLStack64);
            if ((uVar3 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack64,0xe94ac3dfe);
              uVar3 = lib::L2CValue::operator==(aLStack80,aLStack64);
              lib::L2CValue::~L2CValue(aLStack64);
              if ((uVar3 & 1) == 0) {
LAB_7100022a60:
                lib::L2CValue::L2CValue(param_1,false);
                goto LAB_7100022a44;
              }
            }
          }
        }
      }
    }
    lib::L2CValue::L2CValue(param_1,true);
  }
LAB_7100022a44:
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

