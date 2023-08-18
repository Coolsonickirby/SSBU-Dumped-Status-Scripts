
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHiFail_main(L2CFighterMaster *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,true);
  lib::L2CValue::L2CValue(aLStack80,0xfcfe273b4);
  lib::L2CValue::L2CValue(aLStack96,0x13c47bfe60);
  FUN_710002a130(this,aLStack64,aLStack80,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_MASTER_SWORD_STATUS_KIND_FAIL);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,HVar3);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_MASTER_GENERATE_ARTICLE_SWORD);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  HVar3 = lib::L2CValue::as_hash(aLStack112);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar1,HVar3,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,SpecialHiFail_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

