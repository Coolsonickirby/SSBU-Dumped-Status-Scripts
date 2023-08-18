
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::FinalSwimWalk_main_loop
          (L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  ulong uVar2;
  L2CAgent *this_00;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
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
  uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100020fcc:
    FUN_710001f3a0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) goto LAB_7100021138;
    FUN_710001f4c0(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) goto LAB_7100021138;
    FUN_7100021340(aLStack80,this);
    lib::L2CValue::L2CValue(aLStack64,1);
    uVar2 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) != 0) goto LAB_7100021138;
    pLVar4 = (L2CValue *)0x1a;
    this_00 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
    lib::L2CAgent::math_abs(this_00,pLVar4);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xcf44ba9e5);
    uVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar5);
    uVar2 = lib::L2CValue::operator_(aLStack80,aLStack96);
    if ((uVar2 & 1) == 0) {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
      fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack176,fVar5);
      lib::L2CValue::operator_(pLVar4,aLStack176);
      lib::L2CValue::L2CValue(aLStack64,0.0);
      uVar2 = lib::L2CValue::operator_(aLStack160,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) goto LAB_7100021138;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_SWIM_WAIT);
    lib::L2CValue::L2CValue(aLStack80,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = aLStack64;
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar2 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar2 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) goto LAB_7100021138;
      goto LAB_7100020fcc;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar4 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_7100021138:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

