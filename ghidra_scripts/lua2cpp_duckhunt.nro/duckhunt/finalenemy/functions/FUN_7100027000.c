
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100027000(L2CValue *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(param_1,0);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator=(param_1,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  iVar1 = app::lua_bind::WorkModule__get_int_impl
                    (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_A);
  uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_KIND);
    iVar1 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_B);
    uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
    lib::L2CValue::~L2CValue(aLStack64);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_KIND);
      iVar1 = lib::L2CValue::as_integer(aLStack96);
      iVar1 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
      lib::L2CValue::L2CValue(aLStack80,iVar1);
      lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_C);
      uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
      lib::L2CValue::~L2CValue(aLStack64);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_FINALENEMY_INSTANCE_WORK_ID_KIND);
        iVar1 = lib::L2CValue::as_integer(aLStack96);
        iVar1 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
        lib::L2CValue::L2CValue(aLStack80,iVar1);
        lib::L2CValue::L2CValue(aLStack64,_WEAPON_DUCKHUNT_FINALENEMY_KIND_GUN_D);
        uVar2 = lib::L2CValue::operator==(aLStack80,aLStack64);
        lib::L2CValue::~L2CValue(aLStack64);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lib::L2CValue::L2CValue(aLStack64,-15.0);
        lib::L2CValue::operator=(param_1,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,-20.0);
        lib::L2CValue::operator=(param_1,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,-55.0);
      lib::L2CValue::operator=(param_1,aLStack64);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,-10.0);
    lib::L2CValue::operator=(param_1,aLStack64);
  }
  lib::L2CValue::~L2CValue(aLStack64);
  return;
}

