
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::LucarioSpecialNHold_main(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  signed sVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_FLAG_MOT_INHERIT);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0xe06860a20);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_GROUND_MOT);
  lVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0x1244d4ffef);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_AIR_MOT);
  lVar6 = lib::L2CValue::as_integer(aLStack128);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar6,iVar2);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCARIO_GENERATE_ARTICLE_AURABALL);
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_LUCARIO_AURABALL_STATUS_KIND_CHARGE);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar2,iVar3,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  FUN_71001d5930(this);
  lib::L2CValue::L2CValue(aLStack144,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack160,0x1008b0a33d);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  uVar8 = lib::L2CValue::as_integer(aLStack160);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack128,fVar9);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_AURABALL_CHARGE_FRAME);
  iVar2 = lib::L2CValue::as_integer(aLStack144);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack128,iVar2);
  lib::L2CValue::operator_(aLStack96,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,uVar4);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack80,aLStack96);
  lib::L2CValue::operator_(aLStack144,aLStack112);
  lib::L2CValue::L2CValue(aLStack160,false);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::FighterMotionModuleImpl__set_frame_sync_anim_cmd_kirby_copy_impl
            (this->moduleAccessor,fVar9,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::operator_(aLStack80,aLStack112);
  fVar9 = (float)lib::L2CValue::as_number(aLStack128);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar9);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,8);
  sVar5 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar5);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,LucarioSpecialNHold_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

