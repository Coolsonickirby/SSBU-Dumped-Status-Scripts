
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponPickelFishingrod::status::Shoot_main_loop
          (L2CWeaponPickelFishingrod *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong *this_00;
  ulong uVar4;
  L2CValue *pLVar5;
  BattleObjectModuleAccessor *pBVar6;
  ulong uVar7;
  Hash40 HVar8;
  Hash40 HVar9;
  float fVar10;
  uint uVar11;
  long lVar12;
  int in_stack_fffffffffffffe14;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  ulong local_90;
  ulong uStack136;
  ulong local_80;
  ulong uStack120;
  ulong local_70;
  ulong uStack104;
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_70,_WEAPON_PICKEL_FISHINGROD_INSTANCE_WORK_ID_FLAG_ENABLE_REWIND);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_70);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_PICKEL_FISHINGROD_INSTANCE_WORK_ID_FLAG_TOUCH_FLOOR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    lib::L2CValue::_L2CValue((L2CValue *)&local_80);
    if ((uVar4 & 1) == 0) goto LAB_7100096f80;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
    pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
    bVar1 = app::WeaponSpecializer_PickelFishingrod::is_float_touch_floor(pBVar6);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,true);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    if ((uVar4 & 1) == 0) goto LAB_7100096f80;
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_80,_WEAPON_PICKEL_FISHINGROD_INSTANCE_WORK_ID_FLAG_IN_WATER);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_70,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
LAB_7100096fbc:
      lib::L2CValue::L2CValue((L2CValue *)&local_70,0x17bb244fbb);
      HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_70);
      iVar3 = app::lua_bind::SoundModule__play_se_impl
                        (this->moduleAccessor,HVar8,true,false,false,false,0);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
LAB_7100097004:
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      iVar3 = app::WeaponSpecializer_PickelFishingrod::get_float_touch_floor_material(pBVar6);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,_GROUND_COLL_ATTR_ASASE);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      if ((uVar4 & 1) == 0) goto LAB_7100096fbc;
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_70,
                 _WEAPON_PICKEL_FISHINGROD_INSTANCE_WORK_ID_FLOAT_FLOAT_SPEED_Y);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,fVar10);
      lib::L2CValue::L2CValue(aLStack160,0x10abbfb75a);
      lib::L2CValue::L2CValue(aLStack176,0x1a0a2b2724);
      uVar4 = lib::L2CValue::as_integer(aLStack160);
      uVar7 = lib::L2CValue::as_integer(aLStack176);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar4,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar10);
      lib::L2CValue::operator_((L2CValue *)&local_90);
      uVar4 = lib::L2CValue::operator__((L2CValue *)&local_60,(L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_80);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_70);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack176,0x1b3b09788c);
        lib::L2CValue::L2CValue(aLStack192,0x59a440297);
        lib::L2CValue::L2CValue(aLStack208,0.0);
        lib::L2CValue::L2CValue(aLStack224,0.0);
        lib::L2CValue::L2CValue(aLStack240,0.0);
        lib::L2CValue::L2CValue(aLStack256,0.0);
        lib::L2CValue::L2CValue(aLStack272,0.0);
        lib::L2CValue::L2CValue(aLStack288,0.0);
        lib::L2CValue::L2CValue(aLStack304,1.0);
        lib::L2CValue::L2CValue(aLStack320,0.0);
        lib::L2CValue::L2CValue(aLStack336,0.0);
        lib::L2CValue::L2CValue(aLStack352,0.0);
        lib::L2CValue::L2CValue(aLStack368,0.0);
        lib::L2CValue::L2CValue(aLStack384,0.0);
        lib::L2CValue::L2CValue(aLStack400,0.0);
        lib::L2CValue::L2CValue(aLStack416,false);
        lib::L2CValue::L2CValue(aLStack432,_EFFECT_SUB_ATTRIBUTE_WATER_SURFACE_POS);
        HVar8 = lib::L2CValue::as_hash(aLStack176);
        HVar9 = lib::L2CValue::as_hash(aLStack192);
        uVar4 = lib::L2CValue::as_number(aLStack208);
        lVar12 = lib::L2CValue::as_number(aLStack224);
        uVar11 = lib::L2CValue::as_number(aLStack240);
        local_60 = uVar4 & 0xffffffff | lVar12 << 0x20;
        uStack88 = (ulong)uVar11;
        uVar4 = lib::L2CValue::as_number(aLStack256);
        lVar12 = lib::L2CValue::as_number(aLStack272);
        uVar11 = lib::L2CValue::as_number(aLStack288);
        local_70 = uVar4 & 0xffffffff | lVar12 << 0x20;
        uStack104 = (ulong)uVar11;
        fVar10 = (float)lib::L2CValue::as_number(aLStack304);
        uVar4 = lib::L2CValue::as_number(aLStack320);
        lVar12 = lib::L2CValue::as_number(aLStack336);
        uVar11 = lib::L2CValue::as_number(aLStack352);
        local_80 = uVar4 & 0xffffffff | lVar12 << 0x20;
        uStack120 = (ulong)uVar11;
        uVar4 = lib::L2CValue::as_number(aLStack368);
        lVar12 = lib::L2CValue::as_number(aLStack384);
        uVar11 = lib::L2CValue::as_number(aLStack400);
        local_90 = uVar4 & 0xffffffff | lVar12 << 0x20;
        uStack136 = (ulong)uVar11;
        bVar1 = lib::L2CValue::as_bool(aLStack416);
        uVar11 = lib::L2CValue::as_integer(aLStack432);
        uVar11 = app::lua_bind::EffectModule__req_on_joint_impl
                           (this->moduleAccessor,HVar8,HVar9,(Vector3f *)&local_60,
                            (Vector3f *)&local_70,fVar10,(Vector3f *)&local_80,(Vector3f *)&local_90
                            ,(bool)(bVar1 & 1),uVar11,in_stack_fffffffffffffe14,0);
        lib::L2CValue::L2CValue(aLStack160,uVar11);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack432);
        lib::L2CValue::_L2CValue(aLStack416);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack320);
        lib::L2CValue::_L2CValue(aLStack304);
        lib::L2CValue::_L2CValue(aLStack288);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::L2CValue((L2CValue *)&local_70,0x17cc237f2d);
        HVar8 = lib::L2CValue::as_hash((L2CValue *)&local_70);
        iVar3 = app::lua_bind::SoundModule__play_se_impl
                          (this->moduleAccessor,HVar8,true,false,false,false,0);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
        goto LAB_7100097004;
      }
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_70,_WEAPON_PICKEL_FISHINGROD_INSTANCE_WORK_ID_FLAG_TOUCH_FLOOR);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_70);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
    this_00 = &local_70;
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_PICKEL_FISHINGROD_STATUS_KIND_REWIND);
    lib::L2CValue::L2CValue((L2CValue *)&local_70,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
    lib::L2CValue::_L2CValue((L2CValue *)&local_70);
    this_00 = &local_60;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
LAB_7100096f80:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

