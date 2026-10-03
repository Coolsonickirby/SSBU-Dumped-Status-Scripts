
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71000171b0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  Hash40 HVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack240,false);
    HVar4 = app::lua_bind::MotionModule__motion_kind_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,HVar4);
    lib::L2CValue::L2CValue(aLStack96,0x564b918b6);
    uVar5 = lib::L2CValue::operator==(aLStack112,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack96,true);
      lib::L2CValue::operator=(aLStack240,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack240);
    if ((bVar1 & 1U) == 0) {
      HVar4 = app::lua_bind::MotionModule__motion_kind_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack256,HVar4);
      lib::L2CValue::L2CValue(aLStack96,0x39d762289);
      uVar5 = lib::L2CValue::operator==(aLStack256,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar5 & 1) != 0) {
        bVar1 = true;
        goto LAB_71000172f8;
      }
      lib::L2CValue::~L2CValue(aLStack256);
    }
    else {
      bVar1 = false;
LAB_71000172f8:
      iVar3 = _SITUATION_KIND_GROUND;
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
      lib::L2CValue::L2CValue(aLStack96,iVar3);
      uVar5 = lib::L2CValue::operator==(aLStack96,pLVar6);
      lib::L2CValue::~L2CValue(aLStack96);
      if (bVar1) {
        lib::L2CValue::~L2CValue(aLStack256);
      }
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_TYPE_NORMAL);
        lib::L2CValue::L2CValue
                  (aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_GROUND_MOVEMENT_SPEED_X);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack112,fVar8);
        lib::L2CValue::L2CValue
                  (aLStack160,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_GROUND_MOVEMENT_SPEED_Y);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack144,fVar8);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack96);
        lib::L2CAgent::push_lua_stack(param_2,aLStack112);
        lib::L2CAgent::push_lua_stack(param_2,aLStack144);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack112);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack96);
        FUN_7100017f90(param_2);
      }
    }
    lib::L2CValue::operator!(aLStack240);
    bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      FUN_7100018460(param_2);
    }
    FUN_7100018830(aLStack112,param_2);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar5 = lib::L2CValue::operator<(aLStack96,aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::operator!(aLStack240);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack112,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_HOP_BY_FIGTHER);
        iVar3 = lib::L2CValue::as_integer(aLStack112);
        bVar2 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar1 & 1U) == 0) {
LAB_7100017950:
          lib::L2CValue::L2CValue(aLStack272,0);
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLAG_HOP_BY_FIGTHER);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::WorkModule__off_flag_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack128,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_INT_MAX_COUNT);
          iVar3 = lib::L2CValue::as_integer(aLStack128);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack112,iVar3);
          lib::L2CValue::L2CValue(aLStack96,0);
          uVar5 = lib::L2CValue::operator<(aLStack96,aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
          if ((uVar5 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack160,0x9dc05a56b);
            lib::L2CValue::L2CValue(aLStack176,0x1f7a572350);
            uVar5 = lib::L2CValue::as_integer(aLStack160);
            uVar7 = lib::L2CValue::as_integer(aLStack176);
            iVar3 = app::lua_bind::WorkModule__get_param_int_impl
                              (param_2->moduleAccessor,uVar5,uVar7);
            lib::L2CValue::L2CValue(aLStack144,iVar3);
            lib::L2CValue::L2CValue(aLStack96,0);
            uVar5 = lib::L2CValue::operator<(aLStack96,aLStack144);
            lib::L2CValue::~L2CValue(aLStack96);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack176);
            lib::L2CValue::~L2CValue(aLStack160);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
            if ((uVar5 & 1) == 0) {
              lib::L2CValue::L2CValue(aLStack112,0);
              lib::L2CValue::L2CValue(aLStack128,0);
              lib::L2CValue::L2CValue(aLStack144,0);
              app::lua_bind::PostureModule__reverse_lr_impl(param_2->moduleAccessor);
              app::lua_bind::PostureModule__update_rot_y_lr_impl(param_2->moduleAccessor);
              fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
              lib::L2CValue::L2CValue(aLStack96,fVar8);
              lib::L2CValue::operator=(aLStack144,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::L2CValue(aLStack192,0x9dc05a56b);
              lib::L2CValue::L2CValue(aLStack208,0xf8eb556c4);
              uVar5 = lib::L2CValue::as_integer(aLStack192);
              uVar7 = lib::L2CValue::as_integer(aLStack208);
              fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (param_2->moduleAccessor,uVar5,uVar7);
              lib::L2CValue::L2CValue(aLStack176,fVar8);
              lib::L2CValue::L2CValue(aLStack96,0.0);
              lib::L2CValue::operator+(aLStack176,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::L2CValue
                        (aLStack96,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_BASE_HOP_SPEED_X);
              fVar8 = (float)lib::L2CValue::as_number(aLStack160);
              iVar3 = lib::L2CValue::as_integer(aLStack96);
              app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar8,iVar3);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack160);
              lib::L2CValue::~L2CValue(aLStack176);
              lib::L2CValue::~L2CValue(aLStack208);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::L2CValue
                        (aLStack176,_WEAPON_DUCKHUNT_CAN_INSTANCE_WORK_ID_FLOAT_BASE_HOP_SPEED_X);
              iVar3 = lib::L2CValue::as_integer(aLStack176);
              fVar8 = (float)app::lua_bind::WorkModule__get_float_impl
                                       (param_2->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack160,fVar8);
              lib::L2CValue::operator*(aLStack144,aLStack160);
              lib::L2CValue::operator=(aLStack112,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack160);
              lib::L2CValue::~L2CValue(aLStack176);
              lib::L2CValue::L2CValue(aLStack176,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
              iVar3 = lib::L2CValue::as_integer(aLStack176);
              fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                       (param_2->moduleAccessor,iVar3);
              lib::L2CValue::L2CValue(aLStack160,fVar8);
              lib::L2CValue::L2CValue(aLStack208,0x9dc05a56b);
              lib::L2CValue::L2CValue(aLStack224,0x12f99006f0);
              uVar5 = lib::L2CValue::as_integer(aLStack208);
              uVar7 = lib::L2CValue::as_integer(aLStack224);
              fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                       (param_2->moduleAccessor,uVar5,uVar7);
              lib::L2CValue::L2CValue(aLStack192,fVar8);
              lib::L2CValue::operator*(aLStack160,aLStack192);
              lib::L2CValue::operator=(aLStack128,aLStack96);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack192);
              lib::L2CValue::~L2CValue(aLStack224);
              lib::L2CValue::~L2CValue(aLStack208);
              lib::L2CValue::~L2CValue(aLStack160);
              lib::L2CValue::~L2CValue(aLStack176);
              lib::L2CValue::L2CValue(aLStack96,_WEAPON_KINETIC_TYPE_NORMAL);
              lib::L2CAgent::clear_lua_stack(param_2);
              lib::L2CAgent::push_lua_stack(param_2,aLStack96);
              lib::L2CAgent::push_lua_stack(param_2,aLStack112);
              lib::L2CAgent::push_lua_stack(param_2,aLStack128);
              app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
              lib::L2CValue::~L2CValue(aLStack96);
              lib::L2CValue::~L2CValue(aLStack144);
              lib::L2CValue::~L2CValue(aLStack128);
              lib::L2CValue::~L2CValue(aLStack112);
              goto LAB_7100017950;
            }
          }
          else {
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack128);
          }
          lib::L2CValue::L2CValue(aLStack96,_WEAPON_DUCKHUNT_CAN_STATUS_KIND_EXPLODE);
          lib::L2CValue::L2CValue(aLStack112,false);
          lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack272,1);
        }
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar5 = lib::L2CValue::operator<(aLStack96,aLStack272);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack272);
        if ((uVar5 & 1) != 0) {
          lib::L2CValue::L2CValue(param_1,0);
          goto LAB_7100017b9c;
        }
      }
      lib::L2CValue::operator!(aLStack240);
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x16);
        lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
        uVar5 = lib::L2CValue::operator==(pLVar6,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((uVar5 & 1) == 0) {
          FUN_7100016a80(param_2);
        }
        FUN_7100019970(aLStack96,param_2);
        bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        if ((bVar1 & 1U) != 0) {
          lib::L2CValue::L2CValue(param_1,0);
          goto LAB_7100017b9c;
        }
      }
      lib::L2CValue::L2CValue(aLStack128,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar5 = lib::L2CValue::operator<=(aLStack112,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) == 0) {
        pLVar6 = aLStack240;
        goto LAB_7100017210;
      }
      lib::L2CValue::L2CValue(aLStack112,false);
      HVar4 = app::lua_bind::MotionModule__motion_kind_impl(param_2->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack128,HVar4);
      lib::L2CValue::L2CValue(aLStack96,0x39d762289);
      uVar5 = lib::L2CValue::operator==(aLStack128,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack128);
      if ((uVar5 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,true);
        lib::L2CValue::operator=(aLStack112,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
      }
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      if ((bVar1 & 1U) == 0) {
        FUN_710001ab50(param_2);
        lib::L2CValue::L2CValue(param_1,0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack288,_WEAPON_DUCKHUNT_CAN_STATUS_KIND_EXPLODE);
        lib::L2CValue::L2CValue(aLStack304,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
        lib::L2CValue::~L2CValue(aLStack304);
        lib::L2CValue::~L2CValue(aLStack288);
        lib::L2CValue::L2CValue(param_1,1);
      }
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(param_1,0);
    }
LAB_7100017b9c:
    lib::L2CValue::~L2CValue(aLStack240);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_WEAPON_INSTANCE_WORK_ID_INT_LIFE);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
    pLVar6 = aLStack96;
LAB_7100017210:
    lib::L2CValue::~L2CValue(pLVar6);
    lib::L2CValue::L2CValue(param_1,0);
  }
  return;
}

