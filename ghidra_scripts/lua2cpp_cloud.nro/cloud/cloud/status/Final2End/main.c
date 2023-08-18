
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::Final2End_main(L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  bVar1 = lib::L2CValue::as_bool(aLStack80);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xaef170ff6);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar4 = lib::L2CValue::as_hash(aLStack80);
  fVar5 = (float)lib::L2CValue::as_number(aLStack96);
  fVar6 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_GENERATE_ARTICLE_FUSIONSWORD);
  lib::L2CValue::L2CValue(aLStack96,0x92ee4d34c);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar4,false,-1.0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_LINK_NO_FINAL);
  lib::L2CValue::L2CValue(aLStack96,0xcd0c7600f);
  lib::L2CValue::L2CValue(aLStack112,0);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  HVar4 = lib::L2CValue::as_hash(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar2,HVar4,uVar3);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_7100013ba0(this);
  lib::L2CValue::L2CValue(aLStack80,Final2End_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

