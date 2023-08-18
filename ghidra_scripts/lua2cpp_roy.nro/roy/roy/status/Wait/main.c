
void __thiscall L2CFighterRoy::status::Wait_main(L2CFighterRoy *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  float fVar6;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lua2cpp::L2CFighterCommon::sub_wait_common(this);
  lib::L2CValue::L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96);
  lua2cpp::L2CFighterCommon::sub_wait_item_motion_mtrans(this);
  lib::L2CValue::operator_(aLStack80,aLStack128);
  lib::L2CValue::operator_(aLStack96,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack128,false);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack128,0x47dee83e5);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar3 & 1) != 0) goto LAB_71000114d8;
    lib::L2CValue::L2CValue(aLStack128,0x7fb997a80);
    uVar3 = lib::L2CValue::operator__(aLStack96,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar3 & 1) != 0) goto LAB_710001165c;
    lib::L2CValue::L2CValue(aLStack128,0.0);
    lib::L2CValue::L2CValue(aLStack144,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    fVar5 = (float)lib::L2CValue::as_number(aLStack128);
    fVar6 = (float)lib::L2CValue::as_number(aLStack144);
    bVar2 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar2 & 1),0.0,false,false);
LAB_7100011644:
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
LAB_71000114d8:
    lib::L2CValue::L2CValue(aLStack128,true);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,0x60af60f0c);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar4 = lib::L2CValue::as_hash(aLStack144);
      fVar5 = (float)lib::L2CValue::as_number(aLStack160);
      fVar6 = (float)lib::L2CValue::as_number(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      goto LAB_7100011644;
    }
    lua2cpp::L2CFighterCommon::sub_wait_motion_mtrans(this);
  }
  lib::L2CValue::_L2CValue(aLStack128);
LAB_710001165c:
  lib::L2CValue::L2CValue(aLStack128,Wait_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

