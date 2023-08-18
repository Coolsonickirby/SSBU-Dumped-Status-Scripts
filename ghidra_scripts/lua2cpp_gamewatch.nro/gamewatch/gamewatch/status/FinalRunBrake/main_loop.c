
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::FinalRunBrake_main_loop
          (L2CFighterGamewatch *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100024b3c:
    FUN_710001ec40(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) goto LAB_7100024e74;
    FUN_71000241c0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) goto LAB_7100024e74;
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0x101ab8fec1);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack112);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack64);
      uVar4 = uVar4 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar2 = (uVar4 & 1) != 0;
    if (bVar2) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_TURN_RUN);
      lib::L2CValue::L2CValue(aLStack80,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack64);
    }
    lib::L2CValue::L2CValue(aLStack176,(uint)bVar2);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar4 = lib::L2CValue::operator__(aLStack176,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar4 & 1) != 0) goto LAB_7100024e74;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_7100024e74;
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_RUN_BRAKE_WORK_FLOAT_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_7100024e74;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_WAIT);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x60);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_7100024e74;
      goto LAB_7100024b3c;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar5 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_7100024e74:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

