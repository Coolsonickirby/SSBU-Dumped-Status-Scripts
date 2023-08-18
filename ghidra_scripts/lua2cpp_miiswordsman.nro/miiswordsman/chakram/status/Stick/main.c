
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMiiswordsmanChakram::status::Stick_main
          (L2CWeaponMiiswordsmanChakram *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  GroundTouchFlag GVar5;
  GroundCorrectKind GVar6;
  int iVar7;
  L2CAgent *this_00;
  L2CValue *pLVar8;
  ulong uVar9;
  ulong uVar10;
  Hash40 HVar11;
  L2CValue *pLVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack144,_WEAPON_MIISWORDSMAN_CHAKRAM_INSTANCE_WORK_ID_FLAG_1F_FALL);
  iVar3 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack144);
  iVar3 = app::lua_bind::GroundModule__get_touch_moment_flag_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_DOWN);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_DOWN);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    uVar15 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack144,(float)uVar15);
    lib::L2CValue::L2CValue(aLStack128,(float)((ulong)uVar15 >> 0x20));
    lib::L2CValue::L2CValue(aLStack80,aLStack144);
    lib::L2CValue::L2CValue(aLStack96,aLStack128);
    pLVar12 = aLStack96;
    lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,SUB81(pLVar12,0));
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    this_00 = (L2CAgent *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    pLVar8 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CAgent::math_atan(this_00,pLVar8,pLVar12);
    fVar13 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar13);
    pLVar8 = aLStack160;
    lib::L2CValue::operator_(aLStack80,pLVar8);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CAgent::math_deg((L2CAgent *)aLStack96,pLVar8);
    lib::L2CValue::operator_(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack176,0xdb12a1709);
    lib::L2CValue::L2CValue(aLStack192,0xa844212f5);
    uVar9 = lib::L2CValue::as_integer(aLStack176);
    uVar10 = lib::L2CValue::as_integer(aLStack192);
    fVar13 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar9,uVar10);
    lib::L2CValue::L2CValue(aLStack80,fVar13);
    uVar9 = lib::L2CValue::operator_(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar9 & 1) != 0) {
      fVar13 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack208,fVar13);
      lib::L2CValue::operator_(aLStack160,aLStack208);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator_(aLStack192,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_MIISWORDSMAN_CHAKRAM_INSTANCE_WORK_ID_FLOAT_FALL_ANGLE);
      fVar13 = (float)lib::L2CValue::as_number(aLStack176);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar13,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue
                (aLStack80,_WEAPON_MIISWORDSMAN_CHAKRAM_INSTANCE_WORK_ID_FLAG_ENABLE_FALL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack80,0x220cea5125);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_GROUND_TOUCH_FLAG_ALL);
  GVar5 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__attach_impl(this->moduleAccessor,GVar5);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,GROUND_CORRECT_KIND_AIR);
  GVar6 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar6);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack112,0xdb12a1709);
  lib::L2CValue::L2CValue(aLStack160,0xb5af259b6);
  uVar9 = lib::L2CValue::as_integer(aLStack112);
  uVar10 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar9,uVar10);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack176,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  iVar7 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar7);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack80,0x54fbb2ad2);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack160,1.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  HVar11 = lib::L2CValue::as_hash(aLStack80);
  fVar13 = (float)lib::L2CValue::as_number(aLStack112);
  fVar14 = (float)lib::L2CValue::as_number(aLStack160);
  bVar2 = lib::L2CValue::as_bool(aLStack176);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar11,fVar13,fVar14,(bool)(bVar2 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  bVar2 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,false);
  uVar9 = lib::L2CValue::operator__(aLStack112,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    FUN_710003ffe0(aLStack112,this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100040260);
  lib::L2CValue::operator_(pLVar8,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,Stick_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

