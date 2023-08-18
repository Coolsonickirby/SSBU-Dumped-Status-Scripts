
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::LandingFallSpecial_init(L2CFighterInkling *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  Hash40 HVar5;
  ulong uVar6;
  L2CValue *this_00;
  float fVar7;
  float fVar8;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack96,_LINK_NO_ARTICLE);
  lib::L2CValue::L2CValue(aLStack128,0x1db1e6510d);
  lib::L2CValue::L2CValue(aLStack144,0);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  HVar5 = lib::L2CValue::as_hash(aLStack128);
  uVar4 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::LinkModule__send_event_nodes_impl(this->moduleAccessor,iVar3,HVar5,uVar4);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_AFTER_SPECIAL_HI);
  iVar3 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar2 & 1U) == 0) {
    fVar7 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    lib::L2CValue::L2CValue(aLStack144,0x1447a7e8cc);
    lib::L2CValue::L2CValue(aLStack160,0x1447a7e8cc);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,fVar7);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    uVar6 = lib::L2CValue::operator__(aLStack176,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x16f160cbb8);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0x16f160cbb8);
      lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack128);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
    lib::L2CValue::L2CValue(aLStack176,false);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    HVar5 = lib::L2CValue::as_hash(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar3,HVar5,(bool)(bVar1 & 1),-1.0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack128);
    app::lua_bind::ArticleModule__set_rate_impl(this->moduleAccessor,iVar3,fVar7);
    this_00 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0x14815ab6ab);
    lib::L2CValue::L2CValue(aLStack144,0xc599c18a2);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack160,fVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack176,1.0);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack192,fVar7);
    lib::L2CValue::L2CValue(aLStack96,-1.0);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0x147b558bc8);
      lib::L2CValue::operator_(aLStack128,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0xca39325c1);
      lib::L2CValue::operator_(aLStack144,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,aLStack128);
      lib::L2CValue::L2CValue(aLStack208,aLStack160);
      lua2cpp::L2CFighterCommon::sub_get_landing_motion_rate(this,(L2CValue)0x40,(L2CValue)0x30);
      lib::L2CValue::operator_(aLStack176,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CValue::L2CValue(aLStack224,false);
    HVar5 = lib::L2CValue::as_hash(aLStack128);
    fVar7 = (float)lib::L2CValue::as_number(aLStack96);
    fVar8 = (float)lib::L2CValue::as_number(aLStack176);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar5,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
    lib::L2CValue::L2CValue(aLStack224,false);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    HVar5 = lib::L2CValue::as_hash(aLStack144);
    bVar1 = lib::L2CValue::as_bool(aLStack224);
    app::lua_bind::ArticleModule__change_motion_impl
              (this->moduleAccessor,iVar3,HVar5,(bool)(bVar1 & 1),-1.0);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack176);
    app::lua_bind::ArticleModule__set_rate_impl(this->moduleAccessor,iVar3,fVar7);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_INSTANCE_WORK_ID_FLAG_AFTER_SPECIAL_HI);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue(aLStack96);
    this_00 = aLStack176;
  }
  lib::L2CValue::_L2CValue(this_00);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

