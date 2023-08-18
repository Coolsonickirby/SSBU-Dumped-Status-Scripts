
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::MewtwoSpecialNHold_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  signed sVar5;
  long lVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_FLAG_MOT_INHERIT);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xe06860a20);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_GROUND_MOT);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0x1244d4ffef);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_AIR_MOT);
  lVar6 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_GENERATE_ARTICLE_SHADOWBALL);
  lib::L2CValue::L2CValue(aLStack96,_WEAPON_MEWTWO_SHADOWBALL_STATUS_KIND_CHARGE);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    FUN_7100189b00(this);
  }
  else {
    FUN_71001897c0();
  }
  lib::L2CValue::L2CValue(aLStack80,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0x1008b0a33d);
  uVar8 = lib::L2CValue::as_integer(aLStack80);
  uVar9 = lib::L2CValue::as_integer(aLStack112);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar8,uVar9);
  lib::L2CValue::L2CValue(aLStack96,fVar10);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MEWTWO_INSTANCE_WORK_ID_INT_SHADOWBALL_CHARGE_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,uVar4);
  lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::operator_(aLStack144,aLStack96);
  lib::L2CValue::L2CValue(aLStack160,false);
  fVar10 = (float)lib::L2CValue::as_number(aLStack80);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::FighterMotionModuleImpl__set_frame_sync_anim_cmd_kirby_copy_impl
            (this->moduleAccessor,fVar10,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  fVar10 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar10);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
  uVar8 = lib::L2CValue::operator__(pLVar7,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar8 & 1) == 0) {
    FUN_7100189a60(this);
    FUN_710018bbd0(this);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_AIR_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  }
  else {
    FUN_7100189720(this);
    FUN_710018bab0(this);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_TYPE_GROUND_STOP);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
  }
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,8);
  sVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,MewtwoSpecialNHold_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

