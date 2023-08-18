
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKroolCrown::status::Hop_main(L2CWeaponKroolCrown *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  HitStatus HVar6;
  Hash40 HVar7;
  ulong uVar8;
  float *pfVar9;
  L2CValue *pLVar10;
  L2CValue *this_00;
  L2CValue *this_01;
  float fVar11;
  float fVar12;
  uint uVar13;
  long lVar14;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue(aLStack176,0x30be545de);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0.0);
  lib::L2CValue::L2CValue(aLStack112,1.0);
  lib::L2CValue::L2CValue(aLStack128,false);
  HVar7 = lib::L2CValue::as_hash(aLStack176);
  fVar11 = (float)lib::L2CValue::as_number((L2CValue *)&local_60);
  fVar12 = (float)lib::L2CValue::as_number(aLStack112);
  bVar1 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar7,fVar11,fVar12,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  fVar11 = (float)lib::L2CValue::as_number(aLStack176);
  app::lua_bind::MotionModule__set_frame_impl(this->moduleAccessor,fVar11,true);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLOAT_MOTION_RATE);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,fVar11);
  fVar11 = (float)lib::L2CValue::as_number(aLStack176);
  app::lua_bind::MotionModule__set_rate_impl(this->moduleAccessor,fVar11);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack176,GROUND_CORRECT_KIND_AIR);
  GVar4 = lib::L2CValue::as_integer(aLStack176);
  app::lua_bind::GroundModule__set_correct_impl(this->moduleAccessor,GVar4);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_INT_FALL_COUNT)
  ;
  iVar3 = lib::L2CValue::as_integer(aLStack176);
  iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLAG_IS_THROW_MOTION_END);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,false);
  uVar8 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) != 0) {
    pfVar9 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack176,*pfVar9);
    lib::L2CValue::L2CValue(aLStack160,pfVar9[1]);
    lib::L2CValue::L2CValue(aLStack144,pfVar9[2]);
    FUN_7100019850(aLStack112,this,aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLOAT_ROT_NODE_POS_X);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack128,_WEAPON_KROOL_CROWN_INSTANCE_WORK_ID_FLOAT_ROT_NODE_POS_Y);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar11);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar10 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x162d277af);
    uVar8 = lib::L2CValue::as_number(pLVar10);
    lVar14 = lib::L2CValue::as_number(this_00);
    uVar13 = lib::L2CValue::as_number(this_01);
    local_60 = uVar8 & 0xffffffff | lVar14 << 0x20;
    uStack88 = (ulong)uVar13;
    app::lua_bind::PostureModule__set_pos_impl(this->moduleAccessor,(Vector3f *)&local_60);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar8 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      app::lua_bind::WorkModule__dec_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    lib::L2CValue::L2CValue(aLStack112,0);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
  }
  pLVar10 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_710002d570);
  lib::L2CValue::operator_(pLVar10,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,HIT_STATUS_OFF);
  HVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar6,0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Hop_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  return;
}

