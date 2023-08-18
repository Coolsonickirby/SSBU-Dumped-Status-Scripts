
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterJack::status::SpecialHiPickup_main_loop(L2CFighterJack *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  int iVar2;
  uint uVar3;
  ItemCommonParamInt IVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  Item *pIVar8;
  L2CValue *pLVar9;
  undefined8 *this_01;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 auStack256 [2];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  undefined8 auStack128 [2];
  L2CValue aLStack112 [16];
  undefined8 local_60;
  ulong uStack88;
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,true);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack176,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack176,false);
      uVar6 = lib::L2CValue::operator__((L2CValue *)auStack128,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)auStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      if ((uVar6 & 1) != 0) goto LAB_710001b0a4;
    }
    iVar2 = 1;
    goto LAB_710001b73c;
  }
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
LAB_710001b0a4:
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_PICKUP);
  iVar2 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,true);
  uVar6 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack208,iVar2);
    lib::L2CValue::_L2CValue(aLStack176);
    uVar3 = lib::L2CValue::as_integer(aLStack208);
    pvVar7 = (void *)app::lua_bind::ItemManager__find_active_item_from_id_impl
                               (FIGHTER_STATUS_ATTACK_WORK_INT_SMASH_HOLD_KEEP_FRAME,uVar3);
    if (pvVar7 == (void *)0x0) {
      lib::L2CValue::L2CValue
                (aLStack224,(L2CValue *)&FIGHTER_INSTANCE_WORK_ID_INT_ATTACK_LW3_HIT_NEAR_COUNT);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,pvVar7);
    }
    lib::L2CValue::L2CValue(aLStack176,0);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) == 0) {
      pIVar8 = (Item *)lib::L2CValue::as_pointer(aLStack224);
      app::sv_item::end_hooked(pIVar8);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 1),0xb0a444a09);
      lib::L2CValue::L2CValue(aLStack176,true);
      lib::L2CValue::operator_(pLVar9,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,_ITEM_COMMON_PARAM_INT_MURABITO_GEN);
      IVar4 = lib::L2CValue::as_integer(aLStack176);
      pIVar8 = (Item *)lib::L2CValue::as_pointer(aLStack224);
      iVar2 = app::lua_bind::Item__common_param_int_impl(pIVar8,IVar4);
      lib::L2CValue::L2CValue(aLStack240,iVar2);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,_ITEM_MURABITO_GEN_HAVE);
      uVar6 = lib::L2CValue::operator__(aLStack240,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack176,_ITEM_MURABITO_GEN_SHOOT);
        uVar6 = lib::L2CValue::operator__(aLStack240,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,_ITEM_MURABITO_GEN_HAND);
          uVar6 = lib::L2CValue::operator__(aLStack240,aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack176,_ITEM_MURABITO_GEN_EQUIP);
            uVar6 = lib::L2CValue::operator__(aLStack240,aLStack176);
            lib::L2CValue::_L2CValue(aLStack176);
            if ((uVar6 & 1) == 0) {
              lib::L2CValue::L2CValue((L2CValue *)auStack256,aLStack224);
              lib::L2CValue::L2CValue(aLStack176,_ITEM_COMMON_PARAM_INT_HAVE_KIND);
              IVar4 = lib::L2CValue::as_integer(aLStack176);
              pIVar8 = (Item *)lib::L2CValue::as_pointer((L2CValue *)auStack256);
              iVar2 = app::lua_bind::Item__common_param_int_impl(pIVar8,IVar4);
              lib::L2CValue::L2CValue(aLStack112,iVar2);
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::L2CValue(aLStack176,_ITEM_HAVE_KIND_GET);
              uVar6 = lib::L2CValue::operator__(aLStack112,aLStack176);
              lib::L2CValue::_L2CValue(aLStack176);
              if ((uVar6 & 1) != 0) {
                pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,3);
                pfVar10 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
                lib::L2CValue::L2CValue(aLStack176,*pfVar10);
                lib::L2CValue::L2CValue(aLStack160,pfVar10[1]);
                lib::L2CValue::L2CValue(aLStack144,pfVar10[2]);
                uVar3 = lib::L2CValue::as_integer(pLVar9);
                uVar11 = lib::L2CValue::as_number(aLStack176);
                uVar12 = lib::L2CValue::as_number(aLStack160);
                uVar13 = lib::L2CValue::as_number(aLStack144);
                local_60 = CONCAT44(uVar12,uVar11);
                uStack88 = (ulong)uVar13;
                pIVar8 = (Item *)lib::L2CValue::as_pointer((L2CValue *)auStack256);
                bVar1 = app::lua_bind::Item__send_touch_message_impl
                                  (pIVar8,uVar3,(Vector3f *)&local_60,0.0);
                lib::L2CValue::L2CValue((L2CValue *)auStack128,(bool)(bVar1 & 1));
                lib::L2CValue::_L2CValue((L2CValue *)auStack128);
                lib::L2CValue::_L2CValue(aLStack144);
                lib::L2CValue::_L2CValue(aLStack160);
                lib::L2CValue::_L2CValue(aLStack176);
              }
              pIVar8 = (Item *)lib::L2CValue::as_pointer((L2CValue *)auStack256);
              bVar1 = app::lua_bind::ItemModule__use_item_instance_impl
                                (this->moduleAccessor,pIVar8,false);
              lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
              lib::L2CValue::_L2CValue(aLStack176);
              lib::L2CValue::_L2CValue(aLStack112);
              this_01 = auStack256;
            }
            else {
              lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack224);
              pIVar8 = (Item *)lib::L2CValue::as_pointer((L2CValue *)&local_60);
              bVar1 = app::lua_bind::ItemModule__attach_item_instance_impl
                                (this->moduleAccessor,pIVar8,false);
              lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
              lib::L2CValue::_L2CValue(aLStack176);
              this_01 = &local_60;
            }
            goto LAB_710001b3a8;
          }
        }
        lib::L2CValue::L2CValue((L2CValue *)auStack128,aLStack224);
        lib::L2CValue::L2CValue(aLStack112,_ITEM_COMMON_PARAM_INT_HAVE_KIND);
        IVar4 = lib::L2CValue::as_integer(aLStack112);
        pIVar8 = (Item *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
        iVar2 = app::lua_bind::Item__common_param_int_impl(pIVar8,IVar4);
        lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar2);
        lib::L2CValue::L2CValue(aLStack176,_ITEM_HAVE_KIND_NONE);
        uVar6 = lib::L2CValue::operator__((L2CValue *)&local_60,aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue((L2CValue *)&local_60);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar6 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack176,(L2CValue *)auStack128);
          FUN_710001bbf0(this,aLStack176);
          lib::L2CValue::_L2CValue(aLStack176);
        }
        else {
          pIVar8 = (Item *)lib::L2CValue::as_pointer((L2CValue *)auStack128);
          app::lua_bind::Item__end_hooked_impl(pIVar8);
        }
        this_01 = auStack128;
      }
      else {
        lib::L2CValue::L2CValue((L2CValue *)&local_60,aLStack224);
        FUN_710001bbf0(this,&local_60);
        this_01 = &local_60;
      }
LAB_710001b3a8:
      lib::L2CValue::_L2CValue((L2CValue *)this_01);
      lib::L2CValue::_L2CValue(aLStack240);
    }
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_HIT);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,BATTLE_OBJECT_CATEGORY_INVALID);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_CATEGORY);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,0x50000000);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_JACK_STATUS_SPECIAL_HI_INT_TARGET_OBJECT_ID);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    iVar5 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar5);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_JACK_STATUS_SPECIAL_HI_FLAG_PICKUP);
    iVar2 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
  }
  FUN_710001be70(this);
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack176,true);
  uVar6 = lib::L2CValue::operator__(aLStack112,aLStack176);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar6 & 1) == 0) {
    bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack176,false);
    uVar6 = lib::L2CValue::operator__(aLStack112,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) == 0) {
LAB_710001b68c:
      pLVar9 = aLStack112;
      goto LAB_710001b730;
    }
    this_00 = &this->globalTable;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar9,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack176,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator__(pLVar9,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar6 & 1) == 0) goto LAB_710001b654;
      lib::L2CValue::_L2CValue(aLStack112);
LAB_710001b6d4:
      lib::L2CValue::L2CValue(aLStack176,false);
      lib::L2CValue::L2CValue(aLStack112,0xe51249e96);
      lib::L2CValue::L2CValue(aLStack208,0x1213766b59);
      FUN_7100008540(this,aLStack176,aLStack112,aLStack208);
      lib::L2CValue::_L2CValue(aLStack208);
      goto LAB_710001b724;
    }
LAB_710001b654:
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
    lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar9,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) != 0) goto LAB_710001b68c;
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar9,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar6 & 1) != 0) goto LAB_710001b6d4;
  }
  else {
    pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack176,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar9,aLStack176);
    lib::L2CValue::_L2CValue(aLStack176);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x90);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x90);
    }
LAB_710001b724:
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar9 = aLStack176;
LAB_710001b730:
    lib::L2CValue::_L2CValue(pLVar9);
  }
  iVar2 = 0;
LAB_710001b73c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar2);
  return;
}

