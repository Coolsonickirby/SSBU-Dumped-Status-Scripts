
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKoopaKoopag::status::Start_main_loop(L2CWeaponKoopaKoopag *this,L2CValue *return_value)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  L2CValue *this_00;
  code *pcVar8;
  Rect *pRVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 in_s1;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  undefined8 local_50;
  ulong uStack72;
  
  bVar3 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,(bool)(bVar3 & 1));
  bVar4 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  if ((bVar4 & 1U) == 0) {
    lib::L2CValue::L2CValue
              (aLStack112,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLAG_CAMERA_ZOOM_OUT_START);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    bVar3 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar3 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
    uVar6 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) goto LAB_710001ecd4;
    uVar10 = app::lua_bind::CameraModule__get_main_camera_range_impl(this->moduleAccessor);
    local_50 = CONCAT44(in_s1,uVar10);
    app::lua_bind::lib__Rect__store_l2c_table_impl((Rect *)&local_50);
    lib::L2CValue::L2CValue(aLStack128,0xc08c7dc08);
    lib::L2CValue::L2CValue(aLStack144,0xeb8b6beba);
    uVar6 = lib::L2CValue::as_integer(aLStack128);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    iVar5 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
    lib::L2CValue::L2CValue(aLStack112,iVar5);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    this_00 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x11f63699bf);
    pcVar8 = (code *)lib::L2CValue::as_pointer(this_00);
    pRVar9 = (Rect *)(*pcVar8)();
    app::lua_bind::lib__Rect__load_from_l2c_table_impl(pRVar9,aLStack96);
    uVar10 = lib::L2CValue::as_number(aLStack160);
    uVar11 = lib::L2CValue::as_number(aLStack176);
    uVar12 = lib::L2CValue::as_number(aLStack192);
    local_50 = CONCAT44(uVar11,uVar10);
    uStack72 = (ulong)uVar12;
    app::lua_bind::CameraModule__start_final_zoom_out_impl
              (this->moduleAccessor,iVar5,pRVar9,(Vector3f *)&local_50);
    operator_delete(pRVar9);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLAG_CAMERA_ZOOM_OUT);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,
               _WEAPON_KOOPA_KOOPAG_INSTANCE_WORK_ID_FLAG_CAMERA_ZOOM_OUT_START);
    iVar5 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar5);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lVar2 = -0x50;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_WEAPON_KOOPA_KOOPAG_STATUS_KIND_ATTACK);
    lib::L2CValue::L2CValue(aLStack96,false);
    cVar1 = (char)&stack0xfffffffffffffff0;
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)(cVar1 + -0x40),(L2CValue)(cVar1 + -0x50))
    ;
    lib::L2CValue::_L2CValue(aLStack96);
    lVar2 = -0x40;
  }
  lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar2));
LAB_710001ecd4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

