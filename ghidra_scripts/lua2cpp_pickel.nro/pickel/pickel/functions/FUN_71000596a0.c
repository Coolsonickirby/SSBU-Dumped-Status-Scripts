
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000596a0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_SWORD);
  uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_AXE);
    uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_PICK);
      uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_CRAFT_WEAPON_KIND_SHOVEL);
        uVar2 = lib::L2CValue::operator==(param_3,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(param_1,0);
          return;
        }
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_MATERIAL_KIND_SHOVEL);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        iVar1 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
        lib::L2CValue::L2CValue(param_1,iVar1);
      }
      else {
        lib::L2CValue::L2CValue
                  (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_MATERIAL_KIND_PICK);
        iVar1 = lib::L2CValue::as_integer(aLStack80);
        iVar1 = app::lua_bind::WorkModule__get_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
        lib::L2CValue::L2CValue(param_1,iVar1);
      }
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_MATERIAL_KIND_AXE);
      iVar1 = lib::L2CValue::as_integer(aLStack80);
      iVar1 = app::lua_bind::WorkModule__get_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
      lib::L2CValue::L2CValue(param_1,iVar1);
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_PICKEL_STATUS_SPECIAL_N2_INT_CRAFT_MATERIAL_KIND_SWORD);
    iVar1 = lib::L2CValue::as_integer(aLStack80);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),iVar1);
    lib::L2CValue::L2CValue(param_1,iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

