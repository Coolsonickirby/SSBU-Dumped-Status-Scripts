
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBayonetta::status::FinalEnd_exec_stop(L2CFighterBayonetta *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar3;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BAYONETTA_STATUS_KIND_FINAL_START);
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) != 0) {
    this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar3 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
    app::lua_bind::FighterBayonettaFinalModule__final_start_exec_impl
              (BATTLE_OBJECT_CATEGORY_ITEM,pBVar3);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

