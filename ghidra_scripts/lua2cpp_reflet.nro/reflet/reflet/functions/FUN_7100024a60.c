
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100024a60(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
  uVar2 = lib::L2CValue::operator==(aLStack80,param_3);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
    uVar2 = lib::L2CValue::operator==(aLStack80,param_3);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
      uVar2 = lib::L2CValue::operator==(aLStack80,param_3);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_REFLET_MAGIC_KIND_TRON);
        uVar2 = lib::L2CValue::operator==(aLStack80,param_3);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar2 & 1) == 0) {
          lib::L2CValue::L2CValue(param_1,0);
          return;
        }
        lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack96,0x1c1b0ae66d);
        uVar2 = lib::L2CValue::as_integer(aLStack80);
        uVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
        lib::L2CValue::L2CValue(param_1,iVar1);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
        lib::L2CValue::L2CValue(aLStack96,0x242571da8e);
        uVar2 = lib::L2CValue::as_integer(aLStack80);
        uVar3 = lib::L2CValue::as_integer(aLStack96);
        iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                          (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
        lib::L2CValue::L2CValue(param_1,iVar1);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
      lib::L2CValue::L2CValue(aLStack96,0x22b4c56832);
      uVar2 = lib::L2CValue::as_integer(aLStack80);
      uVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
      lib::L2CValue::L2CValue(param_1,iVar1);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
    lib::L2CValue::L2CValue(aLStack96,0x1f0bf7d09d);
    uVar2 = lib::L2CValue::as_integer(aLStack80);
    uVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar2,uVar3);
    lib::L2CValue::L2CValue(param_1,iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

