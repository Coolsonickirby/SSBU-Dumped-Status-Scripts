
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::FallSpecial_exec(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_fall_uniq_process_exec(this);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar5 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  HVar3 = app::lua_bind::ArticleModule__motion_kind_2nd_impl(this->moduleAccessor,iVar2,1);
  lib::L2CValue::L2CValue(aLStack128,HVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  HVar3 = app::lua_bind::MotionModule__motion_kind_2nd_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,HVar3);
  fVar5 = (float)app::lua_bind::MotionModule__weight_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar5);
  uVar4 = lib::L2CValue::operator__(aLStack144,aLStack128);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
    fVar5 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar5);
    lib::L2CValue::L2CValue(aLStack208,1.0);
    lib::L2CValue::L2CValue(aLStack224,true);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    HVar3 = lib::L2CValue::as_hash(aLStack144);
    fVar5 = (float)lib::L2CValue::as_number(aLStack192);
    fVar6 = (float)lib::L2CValue::as_number(aLStack208);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    app::lua_bind::ArticleModule__add_motion_2nd_impl
              (this->moduleAccessor,iVar2,HVar3,fVar5,fVar6,(bool)(bVar1 & 1),1.0);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::L2CValue(aLStack176,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  iVar2 = lib::L2CValue::as_integer(aLStack176);
  fVar5 = (float)lib::L2CValue::as_number(aLStack160);
  app::lua_bind::ArticleModule__set_weight_impl(this->moduleAccessor,iVar2,fVar5,true);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

