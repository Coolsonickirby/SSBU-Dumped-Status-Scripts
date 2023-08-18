
void __thiscall L2CFighterEdge::status::JumpAerial_main(L2CFighterEdge *this,L2CValue *return_value)

{
  ulong uVar1;
  Hash40 HVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  FUN_71000028d0(aLStack80,this);
  lib::L2CValue::L2CValue(aLStack64,false);
  uVar1 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar1 & 1) == 0) {
    HVar2 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,HVar2);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1a);
    fVar5 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,fVar5);
    lib::L2CValue::operator_(aLStack112);
    lib::L2CValue::operator_(pLVar3,aLStack96);
    lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack160,0xe28bbec98);
    uVar1 = lib::L2CValue::as_integer(aLStack144);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar1,uVar4)
    ;
    lib::L2CValue::L2CValue(aLStack128,fVar5);
    uVar1 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar1 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,0xe7f6e164a);
      lib::L2CValue::operator_(aLStack80,aLStack64);
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,0xe1b02d34e);
      lib::L2CValue::operator_(aLStack80,aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lua2cpp::L2CFighterCommon::sub_jump_aerial_item_rocketbelt(this);
    lib::L2CValue::L2CValue(aLStack96,aLStack80);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::status_JumpAerialSub(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack128,&LAB_7100021b60);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    pLVar3 = aLStack80;
  }
  else {
    lua2cpp::L2CFighterCommon::sub_jump_aerial_item_rocketbelt(this);
    lib::L2CValue::L2CValue(aLStack80,false);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterCommon::status_JumpAerialSub(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack112,JumpAerial_main_loop);
    lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x90);
    pLVar3 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar3);
  return;
}

