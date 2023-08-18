
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::Final2Fall_main(L2CFighterCloud *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  L2CValue *pLVar6;
  L2CValue *this_00;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 in_s3;
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  ulong local_120;
  ulong uStack280;
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [24];
  L2CValue aLStack232 [16];
  L2CValue aLStack216 [16];
  L2CValue aLStack200 [16];
  L2CValue aLStack184 [16];
  L2CValue aLStack168 [16];
  L2CValue aLStack152 [16];
  L2CValue aLStack136 [24];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_120,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_120);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  fVar8 = (float)app::lua_bind::PostureModule__scale_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack136,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,FIGHTER_KINETIC_ENERGY_ID_MOTION);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_120);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack136);
  app::sv_kinetic_energy::set_speed_mul(this->luaStateAgent);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::L2CValue(aLStack168,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_ATTACK_TARGET_LR);
  iVar2 = lib::L2CValue::as_integer(aLStack168);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack152,fVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,0);
  uVar3 = lib::L2CValue::operator_((L2CValue *)&local_120,aLStack152);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack168);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xc0f1c94a4);
    lib::L2CValue::L2CValue(aLStack152,0.0);
    lib::L2CValue::L2CValue(aLStack168,1.0);
    lib::L2CValue::L2CValue(aLStack184,false);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_120);
    fVar9 = (float)lib::L2CValue::as_number(aLStack152);
    fVar8 = (float)lib::L2CValue::as_number(aLStack168);
    bVar1 = lib::L2CValue::as_bool(aLStack184);
    uVar14 = 0;
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar9,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_CLOUD_GENERATE_ARTICLE_FUSIONSWORD);
    lib::L2CValue::L2CValue(aLStack152,0xb9e538d9a);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    HVar4 = lib::L2CValue::as_hash(aLStack152);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar4,false,-1.0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_120,0xb1307e003);
    lib::L2CValue::L2CValue(aLStack152,0.0);
    lib::L2CValue::L2CValue(aLStack168,1.0);
    lib::L2CValue::L2CValue(aLStack184,false);
    HVar4 = lib::L2CValue::as_hash((L2CValue *)&local_120);
    fVar9 = (float)lib::L2CValue::as_number(aLStack152);
    fVar8 = (float)lib::L2CValue::as_number(aLStack168);
    bVar1 = lib::L2CValue::as_bool(aLStack184);
    uVar14 = 0;
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar9,fVar8,(bool)(bVar1 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack184);
    lib::L2CValue::_L2CValue(aLStack168);
    lib::L2CValue::_L2CValue(aLStack152);
    lib::L2CValue::_L2CValue((L2CValue *)&local_120);
    lib::L2CValue::L2CValue((L2CValue *)&local_120,_FIGHTER_CLOUD_GENERATE_ARTICLE_FUSIONSWORD);
    lib::L2CValue::L2CValue(aLStack152,0xa3872494d);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_120);
    HVar4 = lib::L2CValue::as_hash(aLStack152);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar4,false,-1.0);
  }
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  uVar10 = app::sv_camera_manager::camera_range();
  local_120 = CONCAT44(fVar8,uVar10);
  uStack280 = CONCAT44(in_s3,uVar14);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_120);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x31ed91fca);
  lib::L2CValue::L2CValue(aLStack168,pLVar5);
  lib::L2CValue::L2CValue(aLStack200,0.0);
  lib::L2CValue::L2CValue(aLStack216,0.0);
  fVar8 = 0.0;
  lib::L2CValue::L2CValue(aLStack232,0.0);
  lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x38,(L2CValue)0x28,(L2CValue)0x18);
  lib::L2CValue::_L2CValue(aLStack232);
  lib::L2CValue::_L2CValue(aLStack216);
  lib::L2CValue::_L2CValue(aLStack200);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x18cdc1683);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
  this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x162d277af);
  lib::L2CValue::L2CValue(aLStack304,_FIGHTER_CLOUD_GENERATE_ARTICLE_FUSIONSWORD);
  lib::L2CValue::L2CValue(aLStack320,0x31ed91fca);
  iVar2 = lib::L2CValue::as_integer(aLStack304);
  HVar4 = lib::L2CValue::as_hash(aLStack320);
  uVar12 = app::lua_bind::ArticleModule__get_joint_pos_impl(this->moduleAccessor,iVar2,HVar4,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,(float)uVar12);
  lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar12 >> 0x20));
  lib::L2CValue::L2CValue(aLStack256,fVar8);
  lib::L2CValue::operator_(pLVar5,(L2CValue *)&local_120);
  lib::L2CValue::operator_(pLVar6,aLStack272);
  lib::L2CValue::operator_(this_00,aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack272);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack152,0x31ed91fca);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack184,0x1fbdb2615);
  lib::L2CValue::operator_(pLVar5,pLVar6);
  lib::L2CValue::L2CValue(aLStack320,0.0);
  lib::L2CValue::L2CValue(aLStack336,0.0);
  uVar3 = lib::L2CValue::as_number(aLStack320);
  lVar13 = lib::L2CValue::as_number(aLStack304);
  uVar11 = lib::L2CValue::as_number(aLStack336);
  local_120 = uVar3 & 0xffffffff | lVar13 << 0x20;
  uStack280 = (ulong)uVar11;
  app::lua_bind::LinkModule__set_constraint_translate_offset_impl
            (this->moduleAccessor,(Vector3f *)&local_120);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,0xeb6991b4a);
  lib::L2CValue::L2CValue(aLStack336,0x1ce82fb415);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_120);
  uVar7 = lib::L2CValue::as_integer(aLStack336);
  fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar7);
  lib::L2CValue::L2CValue(aLStack320,fVar8);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::operator_(aLStack304,aLStack320);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,0.0);
  lib::L2CValue::operator_(aLStack336,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_120,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_FUSIONSWORD_FALL_SPEED);
  fVar8 = (float)lib::L2CValue::as_number(aLStack352);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_120);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue(aLStack352);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,0.0);
  lib::L2CValue::operator_(aLStack304,(L2CValue *)&local_120);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_120,_FIGHTER_CLOUD_STATUS_FINAL_WORK_FLOAT_FUSIONSWORD_FALL_OFFSET_Y
            );
  fVar8 = (float)lib::L2CValue::as_number(aLStack352);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_120);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue(aLStack352);
  FUN_7100005b10(this);
  lib::L2CValue::L2CValue((L2CValue *)&local_120,Final2Fall_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xe0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_120);
  lib::L2CValue::_L2CValue(aLStack336);
  lib::L2CValue::_L2CValue(aLStack320);
  lib::L2CValue::_L2CValue(aLStack304);
  lib::L2CValue::_L2CValue(aLStack184);
  lib::L2CValue::_L2CValue(aLStack168);
  lib::L2CValue::_L2CValue(aLStack152);
  lib::L2CValue::_L2CValue(aLStack136);
  return;
}

