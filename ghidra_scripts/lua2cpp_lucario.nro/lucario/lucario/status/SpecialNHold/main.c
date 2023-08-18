
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialNHold_main(L2CFighterLucario *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  signed sVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,0);
  lib::L2CValue::L2CValue(aLStack80,0);
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_FLAG_MOT_INHERIT);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xe06860a20);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_GROUND_MOT);
  lVar5 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0x1244d4ffef);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_AIR_MOT);
  lVar5 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar5,iVar1);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCARIO_GENERATE_ARTICLE_AURABALL);
  lib::L2CValue::L2CValue(aLStack128,_WEAPON_LUCARIO_AURABALL_STATUS_KIND_CHARGE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack128);
  app::lua_bind::ArticleModule__change_status_impl(this->moduleAccessor,iVar1,iVar2,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  FUN_7100023220(this);
  lib::L2CValue::L2CValue(aLStack128,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack144,0x1008b0a33d);
  uVar6 = lib::L2CValue::as_integer(aLStack128);
  uVar7 = lib::L2CValue::as_integer(aLStack144);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack112,fVar8);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_LUCARIO_INSTANCE_WORK_ID_INT_AURABALL_CHARGE_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,iVar1);
  lib::L2CValue::operator_(aLStack80,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  uVar3 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,uVar3);
  lib::L2CValue::operator_(aLStack64,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack64,aLStack80);
  lib::L2CValue::operator_(aLStack128,aLStack96);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  app::lua_bind::MotionModule__set_frame_sync_anim_cmd_impl
            (this->moduleAccessor,fVar8,true,false,false);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::operator_(aLStack64,aLStack96);
  fVar8 = (float)lib::L2CValue::as_number(aLStack112);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar8);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,8);
  sVar4 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::ControlModule__set_add_jump_mini_button_life_impl(this->moduleAccessor,sVar4);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,SpecialNHold_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

