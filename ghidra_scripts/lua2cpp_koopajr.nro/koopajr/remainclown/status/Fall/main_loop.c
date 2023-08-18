
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKoopajrRemainclown::status::Fall_main_loop
          (L2CWeaponKoopajrRemainclown *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  GroundCorrectKind GVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  undefined8 *this_01;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  undefined8 auStack112 [2];
  undefined8 auStack96 [2];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack112,_WEAPON_KOOPAJR_REMAINCLOWN_INSTANCE_WORK_ID_INT_BURST_FRAME);
  iVar2 = lib::L2CValue::as_integer((L2CValue *)auStack112);
  iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
  uVar4 = lib::L2CValue::operator__((L2CValue *)auStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)auStack96);
  lib::L2CValue::_L2CValue((L2CValue *)auStack112);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KOOPAJR_REMAINCLOWN_STATUS_KIND_BURST);
    lib::L2CValue::L2CValue((L2CValue *)auStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    iVar2 = 1;
    goto LAB_710001b6c8;
  }
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar4 = lib::L2CValue::operator__((L2CValue *)auStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar4 & 1) == 0) {
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
      uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::_L2CValue((L2CValue *)auStack96);
        goto LAB_710001b460;
      }
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) != 0) {
      this_01 = auStack96;
      goto LAB_710001b6bc;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    if ((uVar4 & 1) != 0) goto LAB_710001b460;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
LAB_710001b460:
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
    uVar4 = lib::L2CValue::operator__(pLVar5,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_KIND_AIR);
      GVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KINETIC_TYPE_KOOPAJR_REMAINCLOWN_FALL);
      iVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::KineticModule__change_kinetic_impl(this->moduleAccessor,iVar2);
      this_01 = &local_50;
    }
    else {
      lib::L2CValue::L2CValue((L2CValue *)auStack96,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack96);
      lib::L2CValue::L2CValue((L2CValue *)auStack112,1.0);
      lib::L2CValue::L2CValue(aLStack160,0x11a8eab67e);
      lib::L2CValue::L2CValue(aLStack176,0xb77a32ec4);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar7 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar4,uVar6);
      lib::L2CValue::L2CValue(aLStack144,fVar7);
      lib::L2CValue::operator_(aLStack144);
      lib::L2CValue::L2CValue(aLStack192,1.0);
      uVar8 = lib::L2CValue::as_number((L2CValue *)auStack112);
      uVar9 = lib::L2CValue::as_number(aLStack128);
      uVar10 = lib::L2CValue::as_number(aLStack192);
      local_50 = CONCAT44(uVar9,uVar8);
      uStack72 = (ulong)uVar10;
      app::lua_bind::KineticModule__mul_speed_impl(this->moduleAccessor,(Vector3f *)&local_50,-1);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      this_01 = auStack112;
    }
LAB_710001b6bc:
    lib::L2CValue::_L2CValue((L2CValue *)this_01);
  }
  iVar2 = 0;
LAB_710001b6c8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

