
void __thiscall
L2CFighterGamewatch::status::FinalWait_main(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  ushort uVar2;
  Hash40 HVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  code *pcVar7;
  Rect *pRVar8;
  float fVar9;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined4 local_50;
  float fStack76;
  undefined4 local_48;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  bVar1 = lib::L2CValue::as_bool((L2CValue *)&local_50);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  bVar1 = lib::L2CValue::as_bool(aLStack96);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar2,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x47dee83e5);
  lib::L2CValue::L2CValue(aLStack96,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar3 = lib::L2CValue::as_hash((L2CValue *)&local_50);
  fVar9 = (float)lib::L2CValue::as_number(aLStack96);
  fStack76 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  local_48 = 0;
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar3,fVar9,fStack76,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  local_50 = app::sv_camera_manager::dead_range(this->luaStateAgent);
  app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_50);
  lib::L2CValue::L2CValue(aLStack128,0xdec0a3c43);
  lib::L2CValue::L2CValue(aLStack144,0x155a06ce5f);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::operator_(aLStack112);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x47a67e768);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack112,0xdec0a3c43);
  lib::L2CValue::L2CValue(aLStack128,0x160c57b132);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x5b4ca7514);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,0xdec0a3c43);
  lib::L2CValue::L2CValue(aLStack128,0x1410759bbf);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar9);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x31ed91fca);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack128,0xdec0a3c43);
  lib::L2CValue::L2CValue(aLStack144,0x175bea6a9d);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  uVar5 = lib::L2CValue::as_integer(aLStack144);
  fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar5);
  lib::L2CValue::L2CValue(aLStack112,fVar9);
  lib::L2CValue::operator_(aLStack112);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x6895f72a4);
  lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x11f63699bf);
  pcVar7 = (code *)lib::L2CValue::as_pointer(pLVar6);
  pRVar8 = (Rect *)(*pcVar7)();
  app::lua_bind::lib__Rect__load_from_l2c_table_impl(pRVar8,aLStack96);
  app::lua_bind::CameraModule__add_camera_range_rect_impl(this->moduleAccessor,pRVar8,0);
  operator_delete(pRVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,FinalWait_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xb0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

