
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSDragF_main(L2CFighterRidley *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  DamageNoReactionMode DVar6;
  ulong uVar7;
  ulong uVar8;
  L2CValue *pLVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  long lVar13;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_FLAG_RHOMBUS);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_INT_GRAB_COUNT);
  iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar4,iVar5);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  iVar4 = app::sv_information::stage_id();
  lib::L2CValue::L2CValue(aLStack112,iVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_DAT_710016b498);
  uVar7 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  if ((uVar7 & 1) == 0) {
    iVar4 = app::sv_information::stage_id();
    lib::L2CValue::L2CValue(aLStack128,iVar4);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_DAT_710016b47c);
    uVar7 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar7 & 1) != 0) goto LAB_710000b374;
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack128,0x18bff31062);
    uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    uVar8 = lib::L2CValue::as_integer(aLStack128);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack160,fVar10);
    lib::L2CValue::operator_(aLStack112,aLStack160);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
    lib::L2CValue::operator_(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_60,_FIGHTER_INSTANCE_WORK_ID_FLOAT_CHECK_DEAD_OFFSET_X);
    fVar10 = (float)lib::L2CValue::as_number(aLStack128);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  lib::L2CValue::_L2CValue(aLStack112);
LAB_710000b374:
  FUN_710001d9c0(this);
  lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack144,0x15f634e916);
  uVar7 = lib::L2CValue::as_integer(aLStack128);
  uVar8 = lib::L2CValue::as_integer(aLStack144);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
  fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,fVar10);
  lib::L2CValue::operator_((L2CValue *)&local_60,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar7 = lib::L2CValue::as_number(aLStack112);
  lVar13 = lib::L2CValue::as_number(aLStack128);
  uVar11 = lib::L2CValue::as_number(aLStack144);
  local_60 = uVar7 & 0xffffffff | lVar13 << 0x20;
  uStack88 = (ulong)uVar11;
  app::lua_bind::CameraModule__set_camera_range_offset_impl
            (this->moduleAccessor,(Vector3f *)&local_60,0);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,1.0);
  fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar10);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack128,0x10555a8d05);
  lib::L2CValue::L2CValue(aLStack144,0x10555a8d05);
  lib::L2CValue::L2CValue(aLStack160,false);
  lib::L2CValue::L2CValue(aLStack176,true);
  FUN_710001c840(this,aLStack128,aLStack144,aLStack160,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar7 = lib::L2CValue::operator__(aLStack192,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar7 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack208,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_FIGHTER_RIDLEY_STATUS_SPECIAL_S_WORK_INT_GRAB_COUNT);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__inc_int_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue(aLStack192,0);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_710001f530);
  lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack240,0xc692cfb94);
  uVar7 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar8 = lib::L2CValue::as_integer(aLStack240);
  fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar7,uVar8);
  lib::L2CValue::L2CValue(aLStack224,fVar10);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_DAMAGE_NO_REACTION_MODE_DAMAGE_POWER);
  lib::L2CValue::L2CValue(aLStack240,-1.0);
  DVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar10 = (float)lib::L2CValue::as_number(aLStack240);
  fVar12 = (float)lib::L2CValue::as_number(aLStack224);
  app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
            (this->moduleAccessor,DVar6,fVar10,fVar12,-1);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,GROUND_CORRECT_SHAPE_RHOMBUS_MODIFY_FLAG_FIX);
  lib::L2CValue::L2CValue(aLStack240,true);
  uVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  bVar1 = lib::L2CValue::as_bool(aLStack240);
  app::lua_bind::GroundModule__set_shape_flag_impl(this->moduleAccessor,uVar3,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  app::FighterRidleyLinkEventMotion::new_l2c_table();
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0x105a79305b);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xee1f364bc);
  lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack240,0xc3e3c1ede);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x10da84320f);
  lib::L2CValue::operator_(pLVar9,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack256,LINK_NO_CAPTURE);
  FUN_710001cf10(&local_60,this,aLStack256,aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::L2CValue(aLStack256,SpecialSDragF_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x0);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}

