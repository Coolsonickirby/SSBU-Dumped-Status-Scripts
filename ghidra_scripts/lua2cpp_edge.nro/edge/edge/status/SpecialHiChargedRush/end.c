
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialHiChargedRush_end(L2CFighterEdge *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  BattleObjectModuleAccessor *pBVar4;
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_DAMAGE_CLIFF_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_END);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    FUN_7100014650(this);
  }
  FUN_71000147f0(this);
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
  pBVar4 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar2);
  app::FighterSpecializer_Edge::clear_special_hi_jostle_area(pBVar4);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

