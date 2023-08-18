
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterEdge::status::SpecialHiRush_end(L2CFighterEdge *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INSTANCE_WORK_ID_FLAG_DAMAGE_CLIFF_STOP);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x13be297b87);
  lib::L2CValue::L2CValue(aLStack96,1);
  HVar2 = lib::L2CValue::as_hash(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::EffectModule__detach_kind_impl(this->moduleAccessor,HVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_LANDING);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_END);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack80,0x13be297b87);
      HVar2 = lib::L2CValue::as_hash(aLStack80);
      app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar2,true,true);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_EDGE_STATUS_KIND_SPECIAL_HI_END);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    FUN_7100014650(this);
  }
  FUN_71000147f0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

