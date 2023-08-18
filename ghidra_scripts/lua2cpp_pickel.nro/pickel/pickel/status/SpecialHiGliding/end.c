
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialHiGliding_end(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  L2CValue *pLVar7;
  ulong uVar8;
  float *pfVar9;
  L2CValue *this_01;
  Hash40 HVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_f0;
  ulong uStack232;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,0x41f1b251e);
  lib::L2CValue::L2CValue(aLStack144,0x9b7a04434);
  lVar5 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  lVar6 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::VisibilityModule__set_int64_impl(this->moduleAccessor,lVar5,lVar6);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_FLAG_FIREWORKS);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_STATUS_KIND_DAMAGE_FLY_REFLECT_D);
  uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_DOWN_SIDE);
    uVar3 = lib::L2CValue::as_integer(aLStack160);
    pfVar9 = (float *)app::lua_bind::GroundModule__get_touch_pos_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue(aLStack144,*pfVar9);
    lib::L2CValue::L2CValue(aLStack128,pfVar9[1]);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,aLStack144);
    lib::L2CValue::L2CValue(aLStack96,aLStack128);
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x10,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    uVar11 = lib::L2CValue::as_number(pLVar7);
    uVar12 = lib::L2CValue::as_number(this_01);
    local_f0 = CONCAT44(uVar12,uVar11);
    uStack232 = 0;
    app::lua_bind::PostureModule__set_pos_2d_impl(this->moduleAccessor,(Vector2f *)&local_f0);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,true);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_f0);
  app::lua_bind::ControlModule__clear_command_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_HI_LANDING);
  uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_PICKEL_GENERATE_ARTICLE_WING);
    iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
    app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar2,0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  }
  lib::L2CValue::L2CValue(aLStack96,true);
  lib::L2CValue::L2CValue(aLStack112,false);
  FUN_7100044d60(this,aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PICKEL_STATUS_SPECIAL_HI_INT_JUMP_COUNT);
  iVar2 = lib::L2CValue::as_integer(aLStack160);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,iVar2);
  lib::L2CValue::L2CValue(aLStack176,FIGHTER_INSTANCE_WORK_ID_INT_JUMP_COUNT);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  iVar4 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_HI_FALL_SPECIAL)
  ;
  uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_f0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  if ((uVar8 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_HI_FALL);
    uVar8 = lib::L2CValue::operator__(pLVar7,(L2CValue *)&local_f0);
    lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192);
      pfVar9 = (float *)app::lua_bind::PostureModule__rot_impl(this->moduleAccessor,0);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,*pfVar9);
      lib::L2CValue::L2CValue(aLStack224,pfVar9[1]);
      lib::L2CValue::L2CValue(aLStack208,pfVar9[2]);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_f0);
      lib::L2CValue::operator_(aLStack176,aLStack224);
      lib::L2CValue::operator_(aLStack192,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,0.0);
      lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,0.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_f0);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      uVar11 = lib::L2CValue::as_number(aLStack160);
      uVar12 = lib::L2CValue::as_number(aLStack176);
      uVar3 = lib::L2CValue::as_number(aLStack192);
      local_f0 = CONCAT44(uVar12,uVar11);
      uStack232 = (ulong)uVar3;
      app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_f0,0);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_GROUND_RHOMBUS_MODIFY_DEFAULT);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      app::lua_bind::GroundModule__set_rhombus_modify_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue((L2CValue *)&local_f0,FIGHTER_CLIFF_HANG_DATA_DEFAULT);
      uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
      app::lua_bind::GroundModule__select_cliff_hangdata_impl(this->moduleAccessor,uVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      return;
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_f0,_FIGHTER_ANIMCMD_EFFECT);
  lib::L2CValue::L2CValue(aLStack160,0x1a11dc0ed5);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_f0);
  HVar10 = lib::L2CValue::as_hash(aLStack160);
  app::lua_bind::MotionAnimcmdModule__call_script_single_impl(this->moduleAccessor,iVar2,HVar10,-1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_f0);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

