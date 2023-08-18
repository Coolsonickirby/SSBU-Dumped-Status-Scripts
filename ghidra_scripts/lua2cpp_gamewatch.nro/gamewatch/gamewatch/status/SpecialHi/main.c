
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::SpecialHi_main(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Hash40 HVar6;
  float fVar7;
  float fVar8;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_INSTANCE_WORK_ID_FLAG_SPECIAL_HI);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_RESCUE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_PARACHUTE);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_PARACHUTE);
  lib::L2CValue::L2CValue(aLStack112,false);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = lib::L2CValue::as_bool(aLStack112);
  app::lua_bind::ArticleModule__set_visibility_whole_impl
            (this->moduleAccessor,iVar2,(bool)(bVar1 & 1),0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_710002cab0(aLStack112,this,aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack96,&DAT_710002cc20);
  lib::L2CValue::operator_(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar4 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_RESCUE);
    lib::L2CValue::L2CValue(aLStack144,0xed8a31e01);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    HVar6 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar6,false,-1.0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_PARACHUTE);
    lib::L2CValue::L2CValue(aLStack144,0xed8a31e01);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    HVar6 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar6,false,-1.0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xed8a31e01);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar5 = aLStack96;
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_RESCUE);
    lib::L2CValue::L2CValue(aLStack144,0xa28f17495);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    HVar6 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar6,false,-1.0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_GAMEWATCH_GENERATE_ARTICLE_PARACHUTE);
    lib::L2CValue::L2CValue(aLStack144,0xa28f17495);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    HVar6 = lib::L2CValue::as_hash(aLStack144);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar6,false,-1.0);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0xa28f17495);
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,1.0);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar6 = lib::L2CValue::as_hash(aLStack96);
    fVar7 = (float)lib::L2CValue::as_number(aLStack144);
    fVar8 = (float)lib::L2CValue::as_number(aLStack160);
    bVar1 = lib::L2CValue::as_bool(aLStack176);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar6,fVar7,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack144,GROUND_CORRECT_KIND_AIR);
    GVar3 = lib::L2CValue::as_integer(aLStack144);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
    pLVar5 = aLStack144;
  }
  lib::L2CValue::_L2CValue(pLVar5);
  lib::L2CValue::L2CValue(aLStack144,SpecialHi_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

