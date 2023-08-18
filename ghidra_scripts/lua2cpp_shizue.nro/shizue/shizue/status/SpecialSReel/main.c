
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterShizue::status::SpecialSReel_main(L2CFighterShizue *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  long lVar6;
  Hash40 HVar7;
  void *pvVar8;
  Article *pAVar9;
  float fVar10;
  float fVar11;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack112,0);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar4,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_710000d3a8;
    lib::L2CValue::L2CValue(aLStack96,0x1216b6effc);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x1546d1fbf4);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_HI);
    lVar6 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x15d8b20393);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_LW);
    lVar6 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xe54e41a33);
    lib::L2CValue::operator_(aLStack112,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x11308c0feb);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_HI);
    lVar6 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0x11aeeff78c);
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_LW);
    lVar6 = lib::L2CValue::as_integer(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack128);
    app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_710000d3a8:
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack128,1.0);
  lib::L2CValue::L2CValue(aLStack144,false);
  HVar7 = lib::L2CValue::as_hash(aLStack112);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  fVar11 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack144);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar10,fVar11,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar10);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,1.0);
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_FLOAT_REEL_MOTION_RATE);
  fVar10 = (float)lib::L2CValue::as_number(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x7fb997a80);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHIZUE_STATUS_WORK_ID_SPECIAL_S_INT_MOTION_KIND_2ND);
  lVar6 = lib::L2CValue::as_integer(aLStack96);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SHIZUE_GENERATE_ARTICLE_FISHINGROD);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  pvVar8 = (void *)app::lua_bind::ArticleModule__get_article_impl(this->moduleAccessor,iVar2);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack96,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,pvVar8);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  pAVar9 = (Article *)lib::L2CValue::as_pointer(aLStack96);
  uVar3 = app::lua_bind::Article__get_battle_object_id_impl(pAVar9);
  lib::L2CValue::L2CValue(aLStack128,uVar3);
  uVar3 = lib::L2CValue::as_integer(aLStack128);
  pvVar8 = (void *)app::sv_battle_object::module_accessor(uVar3);
  if (pvVar8 == (void *)0x0) {
    lib::L2CValue::L2CValue(aLStack144,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_FLOAT_LANDING_FRAME);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,pvVar8);
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x30,0x1643785f9d);
  lib::L2CValue::operator_(pLVar4,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  FUN_7100026d30(aLStack144,this);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this[1].field_0x30,0x6017d9eb2);
  lib::L2CValue::operator_(pLVar4,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,SpecialSReel_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

