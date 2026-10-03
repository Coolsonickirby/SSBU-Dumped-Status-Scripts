
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100038f50(L2CValue *param_1,L2CAgent *param_2)

{
  BattleObject **this;
  long lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  L2CValue aLStack80 [16];
  
  this = &param_2[2].battleObject;
  pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,0x16);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE);
    uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) goto LAB_71000396c8;
  }
  lib::L2CValue::L2CValue
            (aLStack112,_WEAPON_ROSETTA_TICO_INSTANCE_WORK_ID_INT_DAMAGE_FLY_REFLECT_COUNT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue(aLStack80,0xf);
  uVar7 = lib::L2CValue::operator<=(aLStack96,aLStack80);
  lib::L2CValue::~L2CValue(aLStack80);
  if ((uVar7 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack96);
    lVar1 = -0x60;
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack144,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_CHECK_REFLECT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack128,iVar3);
    lib::L2CValue::L2CValue(aLStack80,0);
    uVar7 = lib::L2CValue::operator<=(aLStack128,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar7 & 1) == 0) goto LAB_71000396c8;
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    fVar8 = (float)app::sv_kinetic_energy::get_speed_x(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack96,fVar8);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_KINETIC_ENERGY_ID_NORMAL);
    lib::L2CAgent::clear_lua_stack(param_2);
    lib::L2CAgent::push_lua_stack(param_2,aLStack80);
    fVar8 = (float)app::sv_kinetic_energy::get_speed_y(param_2->luaStateAgent);
    lib::L2CValue::L2CValue(aLStack112,fVar8);
    lib::L2CValue::~L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack128,1.0);
    lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_LEFT);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
LAB_71000392f0:
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
    }
    else {
      lib::L2CValue::operator-(aLStack96);
      uVar7 = lib::L2CValue::operator<(aLStack128,aLStack176);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::~L2CValue(aLStack176);
        goto LAB_71000392f0;
      }
      lib::L2CValue::L2CValue
                (aLStack208,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_REFLECT_DIRECTION);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_REFLECT_DIRECTION_RIGHT);
      uVar7 = lib::L2CValue::operator==(aLStack192,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_REFLECT_DIRECTION_RIGHT);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_REFLECT_DIRECTION);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar5);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack224,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE_FLY_REFLECT_LR);
        lib::L2CValue::L2CValue(aLStack240,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x20,(L2CValue)0x10);
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack224);
        lib::L2CValue::L2CValue(param_1,1);
        goto LAB_710003947c;
      }
    }
    lib::L2CValue::L2CValue(aLStack160,GROUND_TOUCH_FLAG_RIGHT);
    uVar4 = lib::L2CValue::as_integer(aLStack160);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar4);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar7 = lib::L2CValue::operator==(aLStack144,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if (((uVar7 & 1) == 0) ||
       (uVar7 = lib::L2CValue::operator<(aLStack128,aLStack96), (uVar7 & 1) == 0)) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack192,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_REFLECT_DIRECTION);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack176,iVar3);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_REFLECT_DIRECTION_LEFT);
      uVar7 = lib::L2CValue::operator==(aLStack176,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_REFLECT_DIRECTION_LEFT);
        lib::L2CValue::L2CValue
                  (aLStack144,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_REFLECT_DIRECTION);
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        iVar5 = lib::L2CValue::as_integer(aLStack144);
        app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar5);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack256,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE_FLY_REFLECT_LR);
        lib::L2CValue::L2CValue(aLStack272,false);
        lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x0,(L2CValue)0xf0);
        lib::L2CValue::~L2CValue(aLStack272);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::L2CValue(param_1,1);
        goto LAB_710003947c;
      }
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
    lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE);
    uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
    lib::L2CValue::~L2CValue(aLStack80);
    if ((uVar7 & 1) == 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this,9);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE_FLY_REFLECT_U);
      uVar7 = lib::L2CValue::operator==(pLVar6,aLStack80);
      lib::L2CValue::~L2CValue(aLStack80);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack160,_GROUND_TOUCH_FLAG_UP);
        uVar4 = lib::L2CValue::as_integer(aLStack160);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(param_2->moduleAccessor,uVar4);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
        lib::L2CValue::L2CValue(aLStack80,true);
        uVar7 = lib::L2CValue::operator==(aLStack144,aLStack80);
        lib::L2CValue::~L2CValue(aLStack80);
        if (((uVar7 & 1) == 0) ||
           (uVar7 = lib::L2CValue::operator<(aLStack128,aLStack112), (uVar7 & 1) == 0)) {
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack160);
        }
        else {
          lib::L2CValue::L2CValue
                    (aLStack192,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_REFLECT_DIRECTION);
          iVar3 = lib::L2CValue::as_integer(aLStack192);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack176,iVar3);
          lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_REFLECT_DIRECTION_LEFT);
          uVar7 = lib::L2CValue::operator==(aLStack176,aLStack80);
          lib::L2CValue::~L2CValue(aLStack80);
          lib::L2CValue::~L2CValue(aLStack176);
          lib::L2CValue::~L2CValue(aLStack192);
          lib::L2CValue::~L2CValue(aLStack144);
          lib::L2CValue::~L2CValue(aLStack160);
          if ((uVar7 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,_WEAPON_ROSETTA_TICO_REFLECT_DIRECTION_UP);
            lib::L2CValue::L2CValue
                      (aLStack144,_WEAPON_ROSETTA_TICO_STATUS_DAMAGE_WORK_INT_REFLECT_DIRECTION);
            iVar3 = lib::L2CValue::as_integer(aLStack80);
            iVar5 = lib::L2CValue::as_integer(aLStack144);
            app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar5);
            lib::L2CValue::~L2CValue(aLStack144);
            lib::L2CValue::~L2CValue(aLStack80);
            lib::L2CValue::L2CValue
                      (aLStack288,_WEAPON_ROSETTA_TICO_STATUS_KIND_DAMAGE_FLY_REFLECT_U);
            lib::L2CValue::L2CValue(aLStack304,false);
            lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0xe0,(L2CValue)0xd0);
            lib::L2CValue::~L2CValue(aLStack304);
            lib::L2CValue::~L2CValue(aLStack288);
            lib::L2CValue::L2CValue(param_1,1);
LAB_710003947c:
            lib::L2CValue::~L2CValue(aLStack128);
            lib::L2CValue::~L2CValue(aLStack112);
            lib::L2CValue::~L2CValue(aLStack96);
            return;
          }
        }
      }
    }
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    lVar1 = -0x50;
  }
  lib::L2CValue::~L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar1));
LAB_71000396c8:
  lib::L2CValue::L2CValue(param_1,0);
  return;
}

