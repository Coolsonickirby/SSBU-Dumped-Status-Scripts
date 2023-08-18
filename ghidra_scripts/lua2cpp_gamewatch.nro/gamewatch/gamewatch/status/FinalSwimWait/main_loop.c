
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::FinalSwimWait_main_loop
          (L2CFighterGamewatch *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  float fVar7;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_71000216e0:
    FUN_710001f3a0(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_7100021af8;
    FUN_710001f4c0(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_7100021af8;
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack160,0xc60e57049);
    uVar4 = lib::L2CValue::as_integer(aLStack144);
    uVar6 = lib::L2CValue::as_integer(aLStack160);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar7);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
    if ((uVar4 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1c);
      lib::L2CValue::L2CValue(aLStack192,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack208,0xcba8643d6);
      uVar4 = lib::L2CValue::as_integer(aLStack192);
      uVar6 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      uVar4 = lib::L2CValue::operator_(pLVar5,aLStack176);
      uVar4 = uVar4 & 0xffffffff;
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_SWIM_TURN_DASH);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack240,(uint)bVar1);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar4 = lib::L2CValue::operator__(aLStack240,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack240);
    if ((uVar4 & 1) != 0) goto LAB_7100021af8;
    FUN_7100021340(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar4 & 1) != 0) goto LAB_7100021af8;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xcee0a3848);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_SWIM_TURN);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack160,(uint)bVar1);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar4 & 1) != 0) goto LAB_7100021af8;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar7);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xcf44ba9e5);
    uVar4 = lib::L2CValue::as_integer(aLStack128);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar4,uVar6)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar7);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_SWIM_WALK);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
    lib::L2CValue::L2CValue(aLStack160,(uint)bVar1);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar5 = aLStack160;
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x20);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) == 0) goto LAB_7100021af8;
      goto LAB_71000216e0;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack224);
    pLVar5 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_7100021af8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

