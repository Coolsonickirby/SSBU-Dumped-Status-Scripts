
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ShoulderWalk_main_loop(L2CFighterDonkey *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *this_00;
  float fVar7;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100022520(aLStack80,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    FUN_7100023820(aLStack80,this);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar1 & 1U) == 0) {
      fVar7 = (float)app::lua_bind::ControlModule__get_stick_y_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack96,fVar7);
      lib::L2CValue::L2CValue(aLStack128,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack144,0xc36694af0);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack112,fVar7);
      uVar4 = lib::L2CValue::operator__(aLStack96,aLStack112);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
LAB_7100023f30:
        this_00 = &this->globalTable;
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
        fVar7 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
        lib::L2CValue::L2CValue(aLStack112,fVar7);
        lib::L2CValue::operator_(pLVar6,aLStack112);
        lib::L2CValue::L2CValue(aLStack144,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack160,0xcf44ba9e5);
        uVar4 = lib::L2CValue::as_integer(aLStack144);
        uVar5 = lib::L2CValue::as_integer(aLStack160);
        fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack128,fVar7);
        uVar4 = lib::L2CValue::operator_(aLStack96,aLStack128);
        if ((uVar4 & 1) == 0) {
          uVar4 = 0;
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
          uVar4 = uVar4 & 0xffffffff;
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar4 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
          lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
          uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) {
            iVar3 = 0;
            goto LAB_71000240e8;
          }
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_FALL);
          lib::L2CValue::L2CValue(aLStack96,false);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
        else {
          lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_WAIT);
          lib::L2CValue::L2CValue(aLStack96,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
        }
      }
      else {
        pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x1d);
        lib::L2CValue::L2CValue(aLStack176,0x6e5ec7051);
        lib::L2CValue::L2CValue(aLStack192,0xcec0a796f);
        uVar4 = lib::L2CValue::as_integer(aLStack176);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack160,iVar3);
        uVar4 = lib::L2CValue::operator_(pLVar6,aLStack160);
        if ((uVar4 & 1) == 0) {
LAB_7100023ebc:
          bVar2 = 0;
        }
        else {
          pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
          uVar4 = lib::L2CValue::operator__(pLVar6,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar4 & 1) == 0) goto LAB_7100023ebc;
          bVar2 = app::lua_bind::GroundModule__is_passable_check_impl(this->moduleAccessor);
          lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
        }
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((bVar2 & 1) == 0) goto LAB_7100023f30;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DONKEY_STATUS_KIND_SHOULDER_PASS);
        lib::L2CValue::L2CValue(aLStack96,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  iVar3 = 1;
LAB_71000240e8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

