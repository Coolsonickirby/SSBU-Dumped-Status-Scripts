
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPacmanFirehydrant::status::Fly_main_loop
          (L2CWeaponPacmanFirehydrant *this,L2CValue *return_value)

{
  L2CValue *this_00;
  long lVar1;
  byte bVar2;
  byte bVar3;
  GroundCorrectKind GVar4;
  int iVar5;
  MotionNodeRotateCompose MVar6;
  MotionNodeRotateOrder MVar7;
  L2CValue *pLVar8;
  ulong uVar9;
  ulong uVar10;
  Hash40 HVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  this_00 = &this->globalTable;
  pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
  uVar9 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar9 & 1) == 0) {
LAB_71000428a0:
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar9 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar9 & 1) != 0) {
      pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,_SITUATION_KIND_GROUND);
      lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_50);
      goto LAB_7100042900;
    }
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar9 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar9 & 1) == 0) goto LAB_71000428a0;
    lib::L2CValue::L2CValue((L2CValue *)&local_50,GROUND_CORRECT_KIND_AIR);
    GVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar4);
LAB_7100042900:
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  }
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_FLY_TOUCH);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar9 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((uVar9 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lVar1 = -0x60;
  }
  else {
    pLVar8 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
    uVar9 = lib::L2CValue::operator__(pLVar8,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) goto LAB_71000429e4;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLAG_FLY_TOUCH);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
    lVar1 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_71000429e4:
  lib::L2CValue::L2CValue(aLStack96,0);
  lib::L2CValue::L2CValue(aLStack112,_WEAPON_PACMAN_FIREHYDRANT_INSTANCE_WORK_ID_FLOAT_ROT);
  iVar5 = lib::L2CValue::as_integer(aLStack112);
  fVar12 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar5);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,fVar12);
  lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x118d74daa0);
  lib::L2CValue::L2CValue(aLStack128,0x19bc93065a);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar10 = lib::L2CValue::as_integer(aLStack128);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar9,uVar10)
  ;
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,0x118d74daa0);
  lib::L2CValue::L2CValue(aLStack144,0x19259a57e0);
  uVar9 = lib::L2CValue::as_integer((L2CValue *)&local_50);
  uVar10 = lib::L2CValue::as_integer(aLStack144);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar9,uVar10)
  ;
  lib::L2CValue::L2CValue(aLStack128,fVar12);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::L2CValue(aLStack144,0x31d39a761);
  lib::L2CValue::operator_(aLStack96);
  lib::L2CValue::operator_(aLStack96);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,_MOTION_NODE_ROTATE_COMPOSE_NONE);
  lib::L2CValue::L2CValue(aLStack224,_MOTION_NODE_ROTATE_ORDER_ZYX);
  HVar11 = lib::L2CValue::as_hash(aLStack144);
  uVar13 = lib::L2CValue::as_number(aLStack160);
  uVar14 = lib::L2CValue::as_number(aLStack176);
  uVar15 = lib::L2CValue::as_number(aLStack192);
  local_50 = CONCAT44(uVar14,uVar13);
  uStack72 = (ulong)uVar15;
  MVar6 = lib::L2CValue::as_integer(aLStack208);
  MVar7 = lib::L2CValue::as_integer(aLStack224);
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar11,(Vector3f *)&local_50,MVar6,MVar7);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::L2CValue(aLStack176,false);
  lib::L2CValue::L2CValue(aLStack192,true);
  HVar11 = lib::L2CValue::as_hash(aLStack144);
  uVar13 = lib::L2CValue::as_number(aLStack160);
  uVar14 = lib::L2CValue::as_number(aLStack112);
  uVar15 = lib::L2CValue::as_number(aLStack128);
  local_50 = CONCAT44(uVar14,uVar13);
  uStack72 = (ulong)uVar15;
  bVar2 = lib::L2CValue::as_bool(aLStack176);
  bVar3 = lib::L2CValue::as_bool(aLStack192);
  app::lua_bind::ModelModule__set_joint_translate_impl
            (this->moduleAccessor,HVar11,(Vector3f *)&local_50,(bool)(bVar2 & 1),(bool)(bVar3 & 1));
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue(aLStack144,0x4207dd664);
  lib::L2CValue::L2CValue(aLStack160,0.0);
  lib::L2CValue::operator_(aLStack112);
  lib::L2CValue::operator_(aLStack128);
  lib::L2CValue::L2CValue(aLStack208,false);
  lib::L2CValue::L2CValue(aLStack224,true);
  HVar11 = lib::L2CValue::as_hash(aLStack144);
  uVar13 = lib::L2CValue::as_number(aLStack160);
  uVar14 = lib::L2CValue::as_number(aLStack176);
  uVar15 = lib::L2CValue::as_number(aLStack192);
  local_50 = CONCAT44(uVar14,uVar13);
  uStack72 = (ulong)uVar15;
  bVar2 = lib::L2CValue::as_bool(aLStack208);
  bVar3 = lib::L2CValue::as_bool(aLStack224);
  app::lua_bind::ModelModule__set_joint_translate_impl
            (this->moduleAccessor,HVar11,(Vector3f *)&local_50,(bool)(bVar2 & 1),(bool)(bVar3 & 1));
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

