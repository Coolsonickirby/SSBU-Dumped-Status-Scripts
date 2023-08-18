
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterBuddy::status::SpecialHi_end(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ArticleOperationTarget AVar4;
  L2CValue *this_00;
  ulong uVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_STATUS_KIND_SPECIAL_HI_JUMP);
  uVar5 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BUDDY_GENERATE_ARTICLE_PAD);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) == 0) goto LAB_7100013eac;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_GENERATE_ARTICLE_PAD);
    lib::L2CValue::L2CValue(aLStack80,_ARTICLE_OPE_TARGET_ALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    AVar4 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    app::lua_bind::ArticleModule__shoot_impl(this->moduleAccessor,iVar3,AVar4,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  else {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_DISABLE_SPECIAL_HI_CONTINUOUS);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  }
  lib::L2CValue::_L2CValue(aLStack64);
LAB_7100013eac:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

