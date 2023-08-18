
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::Final2Attack_main(L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  long lVar8;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_CLOUD_GENERATE_ARTICLE_FUSIONSWORD);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::ArticleModule__generate_article_impl(this->moduleAccessor,iVar2,false,-1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_ATTACK_TARGET_LR);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar3 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0xe81c74249);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_50);
    fVar5 = (float)lib::L2CValue::as_number(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_CLOUD_GENERATE_ARTICLE_FUSIONSWORD);
    lib::L2CValue::L2CValue(aLStack96,0xda46960bb);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar4,false,-1.0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0xd763ef49e);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::L2CValue(aLStack112,1.0);
    lib::L2CValue::L2CValue(aLStack128,false);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_50);
    fVar5 = (float)lib::L2CValue::as_number(aLStack96);
    fVar6 = (float)lib::L2CValue::as_number(aLStack112);
    bVar1 = lib::L2CValue::as_bool(aLStack128);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_CLOUD_GENERATE_ARTICLE_FUSIONSWORD);
    lib::L2CValue::L2CValue(aLStack96,0xcb7cea62c);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar4,false,-1.0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_ATTACK_TARGET_BASE_X);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack96,fVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_50,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_MOVE_TARGET_Y);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  fVar5 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack112,fVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  fVar5 = (float)app::lua_bind::PostureModule__pos_z_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack128,fVar5);
  uVar3 = lib::L2CValue::as_number(aLStack96);
  lVar8 = lib::L2CValue::as_number(aLStack112);
  uVar7 = lib::L2CValue::as_number(aLStack128);
  local_50 = uVar3 & 0xffffffff | lVar8 << 0x20;
  uStack72 = (ulong)uVar7;
  app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FIGHTER_INSTANCE_WORK_ID_FLAG_LOUPE);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,Final2Attack_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

