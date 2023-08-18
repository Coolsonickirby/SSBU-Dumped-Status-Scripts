
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponMurabitoSprout::status::Grow_main_loop
          (L2CWeaponMurabitoSprout *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  Hash40 HVar6;
  ulong *this_00;
  float fVar7;
  uint uVar8;
  float fVar9;
  long lVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong auStack144 [2];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue(aLStack96,false);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack128,0);
  FUN_7100038980(&local_50,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000387e4;
  }
  lib::L2CValue::L2CValue((L2CValue *)auStack144,_WEAPON_MURABITO_SPROUT_INSTANCE_WORK_ID_INT_GROW);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar5 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)auStack144,0.0);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack192,_WEAPON_MURABITO_SPROUT_INSTANCE_WORK_ID_FLOAT_ROT);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    fVar7 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack176,fVar7);
    uVar5 = lib::L2CValue::as_number((L2CValue *)auStack144);
    lVar10 = lib::L2CValue::as_number(aLStack160);
    uVar8 = lib::L2CValue::as_number(aLStack176);
    local_50 = uVar5 & 0xffffffff | lVar10 << 0x20;
    uStack72 = (ulong)uVar8;
    app::lua_bind::PostureModule__set_rot_impl(this->moduleAccessor,(Vector3f *)&local_50,0);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue((L2CValue *)auStack144);
    lib::L2CValue::L2CValue(aLStack160,_LINK_NO_ARTICLE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    uVar5 = lib::L2CValue::operator__((L2CValue *)auStack144,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_LINK_NO_ARTICLE);
      lib::L2CValue::L2CValue((L2CValue *)auStack144,0x1ccd1971bb);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)auStack144);
      app::lua_bind::LinkModule__send_event_parents_impl(this->moduleAccessor,iVar3,HVar6);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_71000387e4;
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack144,_WEAPON_MURABITO_SPROUT_STATUS_GROW_WORK_INT_PREV_GROW);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack144);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar3);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_50,aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack144);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_MURABITO_SPROUT_STATUS_GROW_WORK_INT_PREV_GROW);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  HVar6 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,HVar6);
  lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x4fcc43f6f);
  uVar5 = lib::L2CValue::operator__(aLStack128,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0x4fcc43f6f);
      lib::L2CValue::L2CValue((L2CValue *)auStack144,0.0);
      lib::L2CValue::L2CValue(aLStack160,1.0);
      lib::L2CValue::L2CValue(aLStack176,false);
      HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_50);
      fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack144);
      fVar9 = (float)lib::L2CValue::as_number(aLStack160);
      bVar2 = lib::L2CValue::as_bool(aLStack176);
      app::lua_bind::MotionModule__change_motion_impl
                (this->moduleAccessor,HVar6,fVar7,fVar9,(bool)(bVar2 & 1),0.0,false,false);
LAB_71000387a8:
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      this_00 = &local_50;
      goto LAB_71000387cc;
    }
  }
  else {
    bVar2 = app::lua_bind::MotionModule__is_looped_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack144,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack144);
    if ((bVar1 & 1U) == 0) {
      this_00 = auStack144;
LAB_71000387cc:
      lib::L2CValue::_L2CValue((L2CValue *)this_00);
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,false);
      uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)auStack144);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_50,0x47dee83e5);
        lib::L2CValue::L2CValue((L2CValue *)auStack144,0.0);
        lib::L2CValue::L2CValue(aLStack160,1.0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar6 = lib::L2CValue::as_hash((L2CValue *)&local_50);
        fVar7 = (float)lib::L2CValue::as_number((L2CValue *)auStack144);
        fVar9 = (float)lib::L2CValue::as_number(aLStack160);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::MotionModule__change_motion_impl
                  (this->moduleAccessor,HVar6,fVar7,fVar9,(bool)(bVar2 & 1),0.0,false,false);
        goto LAB_71000387a8;
      }
    }
  }
  FUN_7100038b60(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000387e4:
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

