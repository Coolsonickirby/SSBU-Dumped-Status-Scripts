
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710003b3d0(L2CValue *param_1,long param_2,L2CValue *param_3)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  ulong uVar4;
  L2CValue aLStack80 [16];
  
  pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_MURABITO_FLOWERPOT);
  uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)(param_2 + 200),2);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIND_SHIZUE_POT);
    uVar3 = lib::L2CValue::operator==(pLVar2,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(param_1,0);
      return;
    }
    lib::L2CValue::L2CValue(aLStack80,0x9a1846cb6);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = lib::L2CValue::as_integer(param_3);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(param_1,iVar1);
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,0xfc8a12ede);
    uVar3 = lib::L2CValue::as_integer(aLStack80);
    uVar4 = lib::L2CValue::as_integer(param_3);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                      (*(BattleObjectModuleAccessor **)(param_2 + 0x40),uVar3,uVar4);
    lib::L2CValue::L2CValue(param_1,iVar1);
  }
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

