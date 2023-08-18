
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialN1Walk_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue *pLVar1;
  ulong uVar2;
  L2CAgent *this_01;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    FUN_7100061660(this);
    FUN_7100064e60(this);
    FUN_7100065110(this);
    lib::L2CValue::L2CValue(aLStack112,FIGHTER_STATUS_KIND_WALK);
    FUN_7100065620(aLStack96,this,aLStack112);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar2 & 1) != 0) goto LAB_710006b28c;
    FUN_7100065ef0(aLStack96,this);
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar2 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar2 & 1) != 0) goto LAB_710006b28c;
    pLVar1 = (L2CValue *)0x1a;
    this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CAgent::math_abs(this_01,pLVar1);
    lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack144,0xcf44ba9e5);
    uVar2 = lib::L2CValue::as_integer(aLStack128);
    uVar3 = lib::L2CValue::as_integer(aLStack144);
    fVar4 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar2,uVar3)
    ;
    lib::L2CValue::L2CValue(aLStack96,fVar4);
    uVar2 = lib::L2CValue::operator_(aLStack80,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      fVar4 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,fVar4);
      lib::L2CValue::operator_(pLVar1,aLStack128);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar2 = lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar2 & 1) == 0) {
        FUN_7100066370(this);
        goto LAB_710006b28c;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_WAIT);
      lib::L2CValue::L2CValue(aLStack96,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    }
    else {
      fVar4 = (float)app::lua_bind::GroundModule__get_down_friction_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar4);
      lib::L2CValue::L2CValue(aLStack80,1.0);
      uVar2 = lib::L2CValue::operator_(aLStack96,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_WAIT);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_N1_FALL);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
LAB_710006b28c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

