
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710005efe0(long param_1,L2CValue *param_2,L2CValue *param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_SWORD);
  uVar3 = lib::L2CValue::operator==(param_2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_AXE);
    uVar3 = lib::L2CValue::operator==(param_2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_PICK);
      uVar3 = lib::L2CValue::operator==(param_2,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_SHOVEL);
        uVar3 = lib::L2CValue::operator==(param_2,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar3 & 1) == 0) {
          return;
        }
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS_SHOVEL)
        ;
        iVar1 = lib::L2CValue::as_integer(param_3);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS_PICK);
        iVar1 = lib::L2CValue::as_integer(param_3);
        iVar2 = lib::L2CValue::as_integer(aLStack80);
        app::lua_bind::WorkModule__set_int_impl
                  (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS_AXE);
      iVar1 = lib::L2CValue::as_integer(param_3);
      iVar2 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_STATUS_SWORD);
    iVar1 = lib::L2CValue::as_integer(param_3);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::WorkModule__set_int_impl
              (*(BattleObjectModuleAccessor **)(param_1 + 0x40),iVar1,iVar2);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

