
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBuddy::status::SpecialNShootStart_end(L2CFighterBuddy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack96,pLVar3);
  FUN_7100025740(aLStack80,aLStack96);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BUDDY_GENERATE_ARTICLE_PARTNER);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    bVar1 = lib::L2CValue::as_bool(aLStack64);
    app::lua_bind::ItemModule__set_change_status_event_impl(this->moduleAccessor,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

