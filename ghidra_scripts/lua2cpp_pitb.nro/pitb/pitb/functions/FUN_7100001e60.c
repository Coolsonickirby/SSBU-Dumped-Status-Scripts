
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100001e60(L2CFighterPitb *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PIT_GENERATE_ARTICLE_BOWARROW);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::ArticleModule__get_active_num_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack64,iVar2);
  lib::L2CValue::L2CValue(aLStack48,0);
  bVar1 = lib::L2CValue::operator<=(aLStack64,aLStack48);
  lib::L2CValue::~L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,(bool)(bVar1 & 1));
  lib::L2CValue::~L2CValue(aLStack64);
  lib::L2CValue::~L2CValue(aLStack80);
  return;
}

