
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterRidley::status::SpecialSFall_main_loop(L2CFighterRidley *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  L2CValue *pLVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0x17d31ffb9d);
  uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  this_00 = &this->globalTable;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
  uVar2 = lib::L2CValue::operator__(aLStack96,pLVar4);
  if ((uVar2 & 1) != 0) {
    FUN_710001fec0(aLStack112,this);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    uVar2 = lib::L2CValue::operator__(aLStack112,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_FALL_JUMP)
      ;
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_71000218a4;
    }
  }
  pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  uVar2 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar2 & 1) == 0) {
    pLVar4 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xe);
    lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
    lib::L2CValue::L2CValue(aLStack128,0x19a789f870);
    uVar2 = lib::L2CValue::as_integer(aLStack112);
    uVar3 = lib::L2CValue::as_integer(aLStack128);
    iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,iVar1);
    uVar2 = lib::L2CValue::operator__(pLVar4,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar2 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_50,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack128,0x158133d980);
      uVar2 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      uVar3 = lib::L2CValue::as_integer(aLStack128);
      fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (this->moduleAccessor,uVar2,uVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar5);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::operator_(aLStack112);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      uVar6 = lib::L2CValue::as_number(aLStack128);
      uVar7 = lib::L2CValue::as_number(aLStack144);
      uVar8 = lib::L2CValue::as_number(aLStack160);
      local_50 = CONCAT44(uVar7,uVar6);
      uStack72 = (ulong)uVar8;
      app::lua_bind::CameraModule__set_camera_range_offset_impl
                (this->moduleAccessor,(Vector3f *)&local_50,0);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_RIDLEY_STATUS_KIND_SPECIAL_S_DRAG);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  }
LAB_71000218a4:
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

