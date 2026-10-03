
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710000bbc0(L2CValue *param_1,L2CAgent *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  L2CValue *this;
  ulong uVar8;
  ulong uVar9;
  float fVar10;
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
  
  this = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&param_2[2].battleObject,8);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar8 = lib::L2CValue::operator==(this,aLStack112);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar8 & 1) == 0) {
LAB_710000bc5c:
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack160,0);
    lib::L2CValue::L2CValue(aLStack176,0);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_INT_FRAME);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::operator=(aLStack176,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::L2CValue(aLStack192,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack208,0xb2c8eb8f2);
    uVar8 = lib::L2CValue::as_integer(aLStack192);
    uVar9 = lib::L2CValue::as_integer(aLStack208);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (param_2->moduleAccessor,uVar8,uVar9);
    lib::L2CValue::L2CValue(aLStack112,fVar10);
    lib::L2CValue::operator=(aLStack144,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack192);
    lib::L2CValue::operator=(aLStack128,aLStack144);
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_JUMP);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
    if (((bVar2 & 1U) == 0) &&
       (uVar8 = lib::L2CValue::operator<(aLStack128,aLStack176), (uVar8 & 1) == 0)) {
      lib::L2CValue::~L2CValue(aLStack112);
      goto LAB_710000c170;
    }
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_KICK);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    lib::L2CValue::operator!(aLStack224);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack208);
    if ((bVar2 & 1U) == 0) {
      bVar1 = 0;
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_TREAD_ENABLE);
      iVar3 = lib::L2CValue::as_integer(aLStack272);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
      bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack256);
      lib::L2CValue::~L2CValue(aLStack256);
      lib::L2CValue::~L2CValue(aLStack272);
    }
    lib::L2CValue::~L2CValue(aLStack208);
    lib::L2CValue::~L2CValue(aLStack224);
    lib::L2CValue::~L2CValue(aLStack240);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack192);
    if ((bVar1 & 1) == 0) {
LAB_710000c178:
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_INT_FRAME);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__inc_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack288,0);
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,0x50000000);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TREAD_WORK_INT_LINK_EVENT_RESULT_0);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_AREA_KIND_TREAD);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::AreaModule__get_area_contact_count_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::~L2CValue(aLStack112);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      if (0 < iVar3) {
        iVar4 = 0;
        do {
          lib::L2CValue::L2CValue(aLStack208,_FIGHTER_SZEROSUIT_AREA_KIND_TREAD);
          lib::L2CValue::L2CValue(aLStack224,iVar4);
          iVar5 = lib::L2CValue::as_integer(aLStack208);
          iVar6 = lib::L2CValue::as_integer(aLStack224);
          uVar7 = app::lua_bind::AreaModule__get_area_contact_target_id_impl
                            (param_2->moduleAccessor,iVar5,iVar6);
          lib::L2CValue::L2CValue(aLStack112,uVar7);
          lib::L2CValue::operator=(aLStack160,aLStack112);
          lib::L2CValue::~L2CValue(aLStack112);
          lib::L2CValue::~L2CValue(aLStack224);
          lib::L2CValue::~L2CValue(aLStack208);
          lib::L2CValue::L2CValue(aLStack112,0x50000000);
          uVar8 = lib::L2CValue::operator==(aLStack112,aLStack160);
          lib::L2CValue::~L2CValue(aLStack112);
          if ((uVar8 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_TREAD_WORK_INT_LINK_EVENT_RESULT_0);
            iVar3 = lib::L2CValue::as_integer(aLStack160);
            iVar4 = lib::L2CValue::as_integer(aLStack112);
            app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
            lib::L2CValue::~L2CValue(aLStack112);
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3);
      }
      lib::L2CValue::L2CValue(aLStack208,_FIGHTER_STATUS_TREAD_WORK_INT_LINK_EVENT_RESULT_0);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(param_2->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,iVar3);
      lib::L2CValue::operator=(aLStack160,aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack112,0x50000000);
      uVar8 = lib::L2CValue::operator==(aLStack112,aLStack160);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((uVar8 & 1) != 0) {
LAB_710000c170:
        lib::L2CValue::~L2CValue(aLStack192);
        goto LAB_710000c178;
      }
      lib::L2CValue::L2CValue(aLStack208,0x28c9d08462);
      lib::L2CAgent::clear_lua_stack(param_2);
      lib::L2CAgent::push_lua_stack(param_2,aLStack208);
      lib::L2CAgent::push_lua_stack(param_2,aLStack160);
      app::sv_battle_object::notify_event_msc_cmd(param_2->luaStateAgent);
      lib::L2CAgent::pop_lua_stack(param_2,1);
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::~L2CValue(aLStack208);
      if ((bVar2 & 1U) == 0) goto LAB_710000c170;
      lib::L2CValue::L2CValue
                (aLStack112,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_INT_TREAD_TARGET_ID);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar4 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__set_int_impl(param_2->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_STEP);
      lib::L2CValue::L2CValue(aLStack208,false);
      lua2cpp::L2CFighterBase::change_status(param_2,(L2CValue)0x90,(L2CValue)0x30);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack288,0);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar8 = lib::L2CValue::operator==(aLStack288,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack288);
    if ((uVar8 & 1) != 0) {
      iVar3 = 0;
      goto LAB_710000c214;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack112,0);
    uVar8 = lib::L2CValue::operator==(aLStack128,aLStack112);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((uVar8 & 1) != 0) goto LAB_710000bc5c;
  }
  iVar3 = 1;
LAB_710000c214:
  lib::L2CValue::L2CValue(param_1,iVar3);
  return;
}

