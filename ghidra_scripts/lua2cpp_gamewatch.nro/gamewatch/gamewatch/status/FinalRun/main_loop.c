
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGamewatch::status::FinalRun_main_loop(L2CFighterGamewatch *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  ulong uVar5;
  L2CAgent *this_00;
  float fVar6;
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
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
LAB_7100025100:
    FUN_710001ec40(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) goto LAB_7100025500;
    FUN_71000241c0(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar3 & 1) != 0) goto LAB_7100025500;
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_RUN_WORK_FLOAT_RUN_FRAME);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    fVar6 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack96,fVar6);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
LAB_7100025354:
      iVar2 = 0;
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
      fVar6 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,fVar6);
      lib::L2CValue::operator_(pLVar4,aLStack144);
      lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack192,0x101ab8fec1);
      uVar3 = lib::L2CValue::as_integer(aLStack176);
      uVar5 = lib::L2CValue::as_integer(aLStack192);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar3,uVar5);
      lib::L2CValue::L2CValue(aLStack160,fVar6);
      uVar3 = lib::L2CValue::operator__(aLStack128,aLStack160);
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
        uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
        uVar3 = uVar3 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack80);
      }
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar3 & 1) == 0) goto LAB_7100025354;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_TURN_RUN);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      iVar2 = 1;
    }
    lib::L2CValue::L2CValue(aLStack224,iVar2);
    lib::L2CValue::L2CValue(aLStack80,1);
    uVar3 = lib::L2CValue::operator__(aLStack224,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack224);
    if ((uVar3 & 1) != 0) goto LAB_7100025500;
    pLVar4 = (L2CValue *)0x1a;
    this_00 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
    lib::L2CAgent::math_abs(this_00,pLVar4);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xb12f3fbba);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar5)
    ;
    lib::L2CValue::L2CValue(aLStack112,fVar6);
    uVar3 = lib::L2CValue::operator_(aLStack96,aLStack112);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
LAB_71000254cc:
      iVar2 = 0;
    }
    else {
      pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar3 = lib::L2CValue::operator__(pLVar4,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) goto LAB_71000254cc;
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAMEWATCH_STATUS_KIND_FINAL_RUN_BRAKE);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      iVar2 = 1;
    }
    lib::L2CValue::L2CValue(aLStack160,iVar2);
    lib::L2CValue::L2CValue(aLStack80,1);
    lib::L2CValue::operator__(aLStack160,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    pLVar4 = aLStack160;
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x30);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar3 = lib::L2CValue::operator__(aLStack128,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar3 & 1) == 0) goto LAB_7100025500;
      goto LAB_7100025100;
    }
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack208);
    pLVar4 = aLStack96;
  }
  lib::L2CValue::_L2CValue(pLVar4);
LAB_7100025500:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

