
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialSJumpEnd_end(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  Hash40 HVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  FUN_7100009e90(this,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_GENERATE_ARTICLE_ROLLER);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack96,0x23d3ec2d50);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  HVar2 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar1,HVar2,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

