
void __thiscall L2CFighterSamus::status::Wait_main(L2CFighterSamus *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  Hash40 HVar4;
  L2CValue *this_00;
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
  lib::L2CValue::L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112);
  lua2cpp::L2CFighterCommon::sub_wait_item_motion_mtrans(this);
  lib::L2CValue::operator_(aLStack96,aLStack144);
  lib::L2CValue::operator_(aLStack112,aLStack128);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,false);
  uVar3 = lib::L2CValue::operator__(aLStack96,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack144,0x47dee83e5);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar3 & 1) != 0) goto LAB_7100018f28;
    lib::L2CValue::L2CValue(aLStack144,0x7fb997a80);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar3 & 1) != 0) goto LAB_7100019864;
    lib::L2CValue::L2CValue(aLStack144,0.0);
    lib::L2CValue::L2CValue(aLStack80,1.0);
    lib::L2CValue::L2CValue(aLStack160,false);
    HVar4 = lib::L2CValue::as_hash(aLStack112);
    fVar5 = (float)lib::L2CValue::as_number(aLStack144);
    fVar6 = (float)lib::L2CValue::as_number(aLStack80);
    bVar2 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::MotionModule__change_motion_impl
              (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar2 & 1),0.0,false,false);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack144;
  }
  else {
LAB_7100018f28:
    lib::L2CValue::L2CValue(aLStack160,true);
    lib::L2CValue::L2CValue(aLStack176,false);
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,HVar4);
    lib::L2CValue::L2CValue(aLStack144,0x9eeaf3544);
    uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar3 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack144,0xb4fb275bd);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x9fece0d5d);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xcfc347ab8);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xc063b47db);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x49b6edd00);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x420201547);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x9e696ecad);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xb1a8c28e7);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xbe0831584);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xecbdbc635);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x8d58dc131);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xdd934faa1);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xdc81fdc09);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x1447a7e8cc);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xfefe225e5);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x625e8b08e);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x8b64ab4a8);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x8b12770b1);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xb6c751ced);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xb78983dd2);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xc27ffd62e);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xcb99c2e49);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xa5598d745);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xa86d04046);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xb7b0f5098);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xf841a68f3);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xb0b65a417);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x74c6b3fe3);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x976c3b29b);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x76370fe5a);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0x7997fc339);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xbb634be24);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xb4c3b8347);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xa8149e8fa);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xa7b46d599);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xb2feea709);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
      lib::L2CValue::L2CValue(aLStack144,0xbd5e19a6a);
      uVar3 = lib::L2CValue::operator__(aLStack80,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar3 & 1) != 0) goto LAB_7100019674;
    }
    else {
LAB_7100019674:
      lib::L2CValue::L2CValue(aLStack144,true);
      lib::L2CValue::operator_(aLStack176,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    lib::L2CValue::_L2CValue(aLStack80);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack144,false);
      lib::L2CValue::operator_(aLStack160,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
    }
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    if ((bVar1 & 1U) == 0) {
      lua2cpp::L2CFighterCommon::sub_wait_motion_mtrans(this);
      this_00 = aLStack160;
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,0x60af60f0c);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar4 = lib::L2CValue::as_hash(aLStack144);
      fVar5 = (float)lib::L2CValue::as_number(aLStack80);
      fVar6 = (float)lib::L2CValue::as_number(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar4,fVar5,fVar6,(bool)(bVar2 & 1),0.0,false,false);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      this_00 = aLStack160;
    }
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100019864:
  lib::L2CValue::L2CValue(aLStack144,Wait_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

