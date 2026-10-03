
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100010fe0(L2CValue *param_1,L2CAgent *param_2,L2CValue *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  float fVar8;
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
  L2CValue aLStack80 [16];
  
  bVar1 = lib::L2CValue::operator.cast.to.bool(param_3);
  if ((bVar1 & 1U) != 0) goto LAB_71000115ec;
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(param_2->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
  lib::L2CValue::operator!(aLStack224);
  bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((bVar1 & 1U) != 0) {
    fVar8 = (float)app::lua_bind::PostureModule__lr_impl(param_2->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_FLOAT_SPEED_X);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_INT_FRAME_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_INT_FLAP_COUNT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,iVar3);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator<=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar5 & 1) == 0) {
LAB_71000114dc:
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_INT_FRAME_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,0.0);
      lib::L2CValue::operator+(aLStack112,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_FLOAT_SPEED_X);
      fVar8 = (float)lib::L2CValue::as_number(aLStack160);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__set_float_impl(param_2->moduleAccessor,fVar8,iVar3);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::L2CValue(aLStack240,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_INT_FLAP_COUNT);
      iVar3 = lib::L2CValue::as_integer(aLStack176);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack80,0);
      uVar5 = lib::L2CValue::operator<=(aLStack160,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack176);
      if ((uVar5 & 1) == 0) {
        pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x1a);
        lib::L2CValue::L2CValue(aLStack80,-0.1);
        uVar5 = lib::L2CValue::operator<(pLVar6,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if ((uVar5 & 1) == 0) {
          pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,0x1a);
          lib::L2CValue::L2CValue(aLStack80,0.1);
          uVar5 = lib::L2CValue::operator<(aLStack80,pLVar6);
          lib::L2CValue::~L2CValue(aLStack80);
          if ((uVar5 & 1) != 0) goto LAB_710001125c;
        }
        else {
LAB_710001125c:
          lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
          lib::L2CValue::L2CValue(aLStack208,0xcf70ffc51);
          uVar5 = lib::L2CValue::as_integer(aLStack192);
          uVar7 = lib::L2CValue::as_integer(aLStack208);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (param_2->moduleAccessor,uVar5,uVar7);
          lib::L2CValue::L2CValue(aLStack176,fVar8);
          lib::L2CValue::operator*(aLStack96,aLStack176);
          lib::L2CValue::operator+(aLStack112,aLStack160);
          lib::L2CValue::operator=(aLStack112,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::~L2CValue(aLStack192);
        }
        lib::L2CValue::L2CValue(aLStack160,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                 (param_2->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack80,fVar8);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack208,0xc8008ccc7);
        uVar5 = lib::L2CValue::as_integer(aLStack192);
        uVar7 = lib::L2CValue::as_integer(aLStack208);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack176,fVar8);
        lib::L2CValue::operator+(aLStack80,aLStack176);
        lib::L2CValue::operator=(aLStack80,aLStack160);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack208);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
        lib::L2CAgent::clear_lua_stack(param_2);
        lib::L2CAgent::push_lua_stack(param_2,aLStack160);
        lib::L2CAgent::push_lua_stack(param_2,aLStack80);
        app::sv_kinetic_energy::set_speed(param_2->luaStateAgent);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::L2CValue(aLStack176,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack192,0xd3a2610ed);
        uVar5 = lib::L2CValue::as_integer(aLStack176);
        uVar7 = lib::L2CValue::as_integer(aLStack192);
        fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (param_2->moduleAccessor,uVar5,uVar7);
        lib::L2CValue::L2CValue(aLStack160,fVar8);
        lib::L2CValue::~L2CValue(aLStack192);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_INT_FRAME_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        iVar4 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::L2CValue(aLStack176,_FIGHTER_DUCKHUNT_STATUS_SPECIAL_HI_FLY_INT_FLAP_COUNT);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        app::lua_bind::WorkModule__dec_int_impl(param_2->moduleAccessor,iVar3);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack80);
        goto LAB_71000114dc;
      }
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_DUCKHUNT_STATUS_KIND_SPECIAL_HI_END);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xb0,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack240,1);
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar5 = lib::L2CValue::operator<(aLStack80,aLStack240);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack240);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(param_1,0);
      lib::L2CValue::~L2CValue(aLStack224);
      return;
    }
  }
  lib::L2CValue::~L2CValue(aLStack224);
LAB_71000115ec:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

