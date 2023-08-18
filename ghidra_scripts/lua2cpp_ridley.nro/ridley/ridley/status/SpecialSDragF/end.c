
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSDragF_end(L2CFighterRidley *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  ushort uVar2;
  int iVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  float fVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  Hash40MapEntry **local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_X);
  fVar6 = (float)lib::L2CValue::as_number((L2CValue *)&local_50);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack96,false);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  uVar8 = lib::L2CValue::as_number(aLStack96);
  lVar9 = lib::L2CValue::as_number(aLStack112);
  uVar7 = lib::L2CValue::as_number(aLStack128);
  local_50 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar9 << 0x20);
  uStack72 = (ulong)uVar7;
  app::lua_bind::CameraModule__set_camera_range_offset_impl
            (this->moduleAccessor,(Vector3f *)&local_50,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_WALL);
  uVar8 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar8 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_CLIFF);
    uVar8 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar8 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_JUMP)
      ;
      uVar8 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar8 & 1) == 0) {
        FUN_7100006ee0(this);
      }
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_WALL);
  uVar8 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar8 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG_CLIFF);
    uVar8 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0.0);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      uVar8 = lib::L2CValue::as_number(aLStack96);
      lVar9 = lib::L2CValue::as_number(aLStack112);
      uVar7 = lib::L2CValue::as_number(aLStack128);
      local_50 = (Hash40MapEntry **)(uVar8 & 0xffffffff | lVar9 << 0x20);
      uStack72 = (ulong)uVar7;
      app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_STATUS_KIND_CATCH_CUT);
  uVar8 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_50);
    fVar6 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack128,0x1616bb475e);
    pLVar4 = (L2CValue *)lib::L2CValue::as_integer((L2CValue *)&local_50);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                             (this->moduleAccessor,(ulong)pLVar4,uVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CAgent::math_abs((L2CAgent *)aLStack96,pLVar4);
    uVar8 = lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack144,0x13a53494ac);
      uVar8 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar8,uVar5);
      lib::L2CValue::L2CValue(aLStack128,fVar6);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack96,aLStack128);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0.0);
      lib::L2CValue::operator_(aLStack160,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_INSTANCE_WORK_ID_FLOAT_FORCE_CAPTURE_CUT_SPEED_X);
      fVar6 = (float)lib::L2CValue::as_number(aLStack144);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar6,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

